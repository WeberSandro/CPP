/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanweber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 09:09:08 by sanweber          #+#    #+#             */
/*   Updated: 2024/11/21 09:10:30 by sanweber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

// Construtor que inicializa o humano com sua arma
HumanA::HumanA(const std::string& name, Weapon& weapon) : name(name), weapon(weapon) {}

// Exibe a mensagem de ataque
void HumanA::attack() const
{
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
