/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanweber <sanweber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 16:14:38 by sanweber          #+#    #+#             */
/*   Updated: 2024/11/26 17:36:40 by sanweber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Construtor padrão
Fixed::Fixed() : _value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

// Construtor que aceita um inteiro
Fixed::Fixed(int const num)
{
    std::cout << "Int constructor called" << std::endl;
    _value = num << _fractionalBits; // Converte inteiro para ponto fixo
}

// Construtor que aceita um float
Fixed::Fixed(float const num)
{
    std::cout << "Float constructor called" << std::endl;
    _value = roundf(num * (1 << _fractionalBits)); // Convert float a ponto fixo
}

// Construtor de cópia
Fixed::Fixed(Fixed const &other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other; // Usa o operador de atribuição
}

// Operador de atribuição
Fixed &Fixed::operator=(Fixed const &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
		_value = other._value;
    return *this;
}

// Destrutor
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

// Converte o valor em ponto fixo para float
float Fixed::toFloat(void) const
{
    return static_cast<float>(_value) / (1 << _fractionalBits);
}

// Converte o valor em ponto fixo para inteiro
int Fixed::toInt(void) const
{
    return _value >> _fractionalBits;
}

// Get para o valor bruto
int Fixed::getRawBits(void) const
{
    return _value;
}

// Set para o valor bruto
void Fixed::setRawBits(int const raw)
{
    _value = raw;
}

// Sobrecarga do operador de inserção para o fluxo de saída
std::ostream &operator<<(std::ostream &out, Fixed const &fixed)
{
    out << fixed.toFloat(); // Exibe o valor em formato de ponto flutuante
    return out;
}
