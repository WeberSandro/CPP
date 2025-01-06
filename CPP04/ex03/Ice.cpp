/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanweber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 14:23:46 by sanweber          #+#    #+#             */
/*   Updated: 2024/12/17 14:26:38 by sanweber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    std::cout << "Ice criado!" << std::endl;
}

Ice::Ice(Ice const &other) : AMateria(other)
{
    std::cout << "Ice copiado!" << std::endl;
}

Ice &Ice::operator=(Ice const &other)
{
    if (this != &other) 
        _type = other._type;
    std::cout << "Operador de atribuição de Ice chamado!" << std::endl;
    return *this;
}

Ice::~Ice()
{
    std::cout << "Ice destruído!" << std::endl;
}

AMateria* Ice::clone() const
{
    return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
