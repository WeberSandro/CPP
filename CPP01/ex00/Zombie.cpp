/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanweber <sanweber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:20:37 by sanweber          #+#    #+#             */
/*   Updated: 2024/11/19 16:01:46 by sanweber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Construtor que inicializa o nome do zumbi
Zombie::Zombie(std::string zombieName) : name(zombieName) {}
// Destrutor que imprime uma mensagem que destruiu o zumbi (automatico)
Zombie::~Zombie()
{
    std::cout << "Zombie " << name << " is destroyed." << std::endl;
}
// Método para o zumbi se anunciar
void Zombie::announce() const
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
