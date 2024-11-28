/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanweber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 11:30:41 by sanweber          #+#    #+#             */
/*   Updated: 2024/11/26 11:34:23 by sanweber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Inicializa a constante estática (definição)
const int Fixed::_fractionalBits = 8;

// Construtor padrão
Fixed::Fixed() : _value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

// Construtor de cópia
Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other; // Chama o operador de atribuição
}

// Operador de atribuição
Fixed &Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other) { // Evita autoatribuição
        this->_value = other.getRawBits();
    }
    return *this; // Retorna a referência ao objeto atual
}

// Destrutor
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

// Retorna o valor interno sem conversão
int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_value;
}

// Define o valor interno
void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->_value = raw;
}
