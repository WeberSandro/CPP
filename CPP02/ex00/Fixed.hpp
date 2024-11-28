/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanweber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 11:28:20 by sanweber          #+#    #+#             */
/*   Updated: 2024/11/26 11:30:10 by sanweber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private:
    int _value; // Armazena o valor do número em ponto fixo
    static const int _fractionalBits; // Número de bits para a parte fracionária

public:
    Fixed();                            // Construtor padrão
    Fixed(const Fixed &other);          // Construtor de cópia
    Fixed &operator=(const Fixed &other); // Operador de atribuição
    ~Fixed();                           // Destrutor

    int getRawBits(void) const;         // Retorna o valor interno sem conversão
    void setRawBits(int const raw);     // Define o valor interno
};

#endif
