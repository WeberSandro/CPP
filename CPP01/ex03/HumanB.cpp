/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanweber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 09:11:19 by sanweber          #+#    #+#             */
/*   Updated: 2024/11/21 09:14:42 by sanweber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

// Construtor que inicializa o humano sem arma
HumanB::HumanB(const std::string& name) : name(name), weapon(NULL) {}
// Define a arma do humano
void HumanB::setWeapon(Weapon& weapon)
{
    this->weapon = &weapon;
}

// Exibe a mensagem de ataque
void HumanB::attack() const
{
    if (weapon)
   		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    else
		std::cout << name << " has no weapon to attack with!" << std::endl;
}
