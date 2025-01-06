/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanweber <sanweber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 16:36:20 by sanweber          #+#    #+#             */
/*   Updated: 2024/12/12 15:57:11 by sanweber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
protected:
    std::string _type; // Tipo do animal

public:
    // Construtor padrão
    Animal();

    // Construtor de cópia
    Animal(const Animal& other);

    // Operador de atribuição
    Animal& operator=(const Animal& other);

    // Destrutor virtual
    virtual ~Animal();

    // Funções membros
    virtual void makeSound() const; // Método virtual para som
    std::string getType() const;
};

#endif
