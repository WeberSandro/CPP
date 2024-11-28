/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanweber <sanweber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 12:23:11 by sanweber          #+#    #+#             */
/*   Updated: 2024/11/20 15:35:47 by sanweber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Cria uma horda de zumbis
Zombie* zombieHorde(int N, std::string name)
{
    if (N <= 0)
        return NULL;
    Zombie* horde = new Zombie[N]; // Aloca um array de zumbis
    for (int i = 0; i < N; i++)
   	    horde[i].setName(name); // Define o nome para cada zumbi (o mesmo)
    return horde; // Retorna ponteiro para o primeiro zumbi
}
