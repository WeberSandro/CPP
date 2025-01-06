/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanweber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 16:28:49 by sanweber          #+#    #+#             */
/*   Updated: 2024/12/16 16:26:10 by sanweber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : _brain(new Brain())
{
    _type = "Dog";
    std::cout << "Construtor de Dog chamado!" << std::endl;
}

Dog::Dog(const Dog& other) : AAnimal(other), _brain(new Brain(*other._brain))
{
    std::cout << "Construtor de cópia de Dog chamado!" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
    if (this != &other)
	{	
        AAnimal::operator=(other);
		*_brain = *other._brain;  // Copia profunda
	}
    std::cout << "Operador de atribuição de Dog chamado!" << std::endl;
    return *this;
}

Dog::~Dog()
{
	delete _brain;
    std::cout << "Destrutor de Dog chamado!" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Dog faz: Woof! Woof!" << std::endl;
}

Brain* Dog::getBrain() const
{
    return _brain;
}
