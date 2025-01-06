/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanweber <sanweber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 16:21:43 by sanweber          #+#    #+#             */
/*   Updated: 2024/12/13 14:00:07 by sanweber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    _type = "Cat";
    std::cout << "Construtor de Cat chamado!" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other)
{
    std::cout << "Construtor de cópia de Cat chamado!" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
    if (this != &other) 
        Animal::operator=(other);
    std::cout << "Operador de atribuição de Cat chamado!" << std::endl;
    return *this;
}

Cat::~Cat()
{
    std::cout << "Destrutor de Cat chamado!" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Cat faz: Meowww! Meowww!" << std::endl;
}
