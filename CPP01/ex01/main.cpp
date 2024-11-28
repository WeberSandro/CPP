/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanweber <sanweber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 12:25:09 by sanweber          #+#    #+#             */
/*   Updated: 2024/11/20 15:49:14 by sanweber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
// usar "valgrind --leak-check=full ./zombies"
// Declaração da função zombieHorde
Zombie* zombieHorde(int N, std::string name);

int main()
{
    int N = 4; // Número de zumbis
    std::string name = "ZombieHorde"; // Nome dos zumbis
    Zombie* horde = zombieHorde(N, name); // Cria horda de zumbis
    if (horde)
    {
        for (int i = 0; i < N; i++)
            horde[i].announce(); // Cada zumbi da horda se anuncia
        delete[] horde; // Libera a memoria alocada 
    }
    else
        std::cout << "Failed to create zombie horde." << std::endl;
    return 0;
}
