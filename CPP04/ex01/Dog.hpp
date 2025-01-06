/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanweber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 16:30:47 by sanweber          #+#    #+#             */
/*   Updated: 2024/12/13 16:25:59 by sanweber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp" 

class Dog : public Animal
{
private:
	Brain* _brain;  // Atributo exclusivo Dog

public:
    // Construtor padrão
    Dog();

    // Construtor de cópia
    Dog(const Dog& other);

    // Operador de atribuição
    Dog& operator=(const Dog& other);

    // Destrutor
    ~Dog();

    // Sobrescrevendo o método makeSound
    void makeSound() const;
	Brain* getBrain() const;
};

#endif
