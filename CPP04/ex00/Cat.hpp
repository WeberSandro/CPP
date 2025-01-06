/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanweber <sanweber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 16:26:37 by sanweber          #+#    #+#             */
/*   Updated: 2024/12/12 15:59:50 by sanweber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
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
};

#endif
