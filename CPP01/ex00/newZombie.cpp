/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanweber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:11:31 by sanweber          #+#    #+#             */
/*   Updated: 2024/11/19 14:14:06 by sanweber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Função que cria um zumbi no heap e retorna um ponteiro para ele
Zombie* newZombie(std::string name)
{
    return new Zombie(name);
}
