/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanweber <sanweber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 16:26:37 by sanweber          #+#    #+#             */
/*   Updated: 2024/12/16 15:37:39 by sanweber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
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
