/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanweber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 15:29:34 by sanweber          #+#    #+#             */
/*   Updated: 2024/12/11 15:33:06 by sanweber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// Construtor padrão
WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
    std::cout << "Construtor de WrongAnimal chamado!" << std::endl;
}

// Destrutor
WrongAnimal::~WrongAnimal()
{
    std::cout << "Destrutor de WrongAnimal chamado!" << std::endl;
}

// Retorna o tipo do animal
std::string WrongAnimal::getType() const
{
    return type;
}

// Emite som genérico para a classe WrongAnimal
void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal faz um som genérico!" << std::endl;
}
