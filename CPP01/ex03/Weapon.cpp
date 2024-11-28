/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanweber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 08:59:21 by sanweber          #+#    #+#             */
/*   Updated: 2024/11/21 09:01:11 by sanweber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

// Construtor que inicializa o tipo da arma
Weapon::Weapon(const std::string& type) : type(type) {}

// Retorna o tipo da arma (referência constante)
const std::string& Weapon::getType() const
{
    return type;
}

// Define um novo tipo para a arma
void Weapon::setType(const std::string& newType)
{
    type = newType;
}
