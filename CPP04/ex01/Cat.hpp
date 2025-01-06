/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanweber <sanweber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 16:26:37 by sanweber          #+#    #+#             */
/*   Updated: 2024/12/13 16:02:48 by sanweber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain* _brain;  // Atributo exclusivo Cat

public:
    // Construtor padrão
    Cat();

    // Construtor de cópia
    Cat(const Cat& other);

    // Operador de atribuição
    Cat& operator=(const Cat& other);

    // Destrutor
    ~Cat();

    // Sobrescrevendo o método makeSound
    void makeSound() const;
	Brain* getBrain() const;
};

#endif
