/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanweber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 16:28:49 by sanweber          #+#    #+#             */
/*   Updated: 2024/12/11 16:30:23 by sanweber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    _type = "Dog";
    std::cout << "Construtor de Dog chamado!" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other)
{
    std::cout << "Construtor de cópia de Dog chamado!" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
    if (this != &other) 
        Animal::operator=(other);
    std::cout << "Operador de atribuição de Dog chamado!" << std::endl;
    return *this;
}

Dog::~Dog()
{
    std::cout << "Destrutor de Dog chamado!" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Dog faz: Woof! Woof!" << std::endl;
}
