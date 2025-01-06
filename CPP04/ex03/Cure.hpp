/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanweber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 14:27:04 by sanweber          #+#    #+#             */
/*   Updated: 2024/12/17 14:27:58 by sanweber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

// Classe concreta Cure
class Cure : public AMateria
{
public:
    Cure();
    Cure(Cure const &other);
    Cure &operator=(Cure const &other);
    virtual ~Cure();

    // Clona a matéria
    virtual AMateria* clone() const;

    // Usa a matéria Cure
    virtual void use(ICharacter& target);
};

#endif
