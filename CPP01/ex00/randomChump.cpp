/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanweber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:15:03 by sanweber          #+#    #+#             */
/*   Updated: 2024/11/19 14:16:13 by sanweber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Função que cria um zumbi no stack e o faz anunciar
void randomChump(std::string name)
{
    Zombie zombie(name);
    zombie.announce();
}
