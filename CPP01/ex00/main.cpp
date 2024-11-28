/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanweber <sanweber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:47:57 by sanweber          #+#    #+#             */
/*   Updated: 2024/11/19 15:59:13 by sanweber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

int main()
{
    // Criando um zumbi no heap e destruindo depois de anunciar
    Zombie* heapZombie = newZombie("HeapZombie");
    heapZombie->announce();
	delete heapZombie;
    // Criando um zumbi no stack (destruido automaticamente apos execucao)
    randomChump("StackZombie");
    return 0;
}
