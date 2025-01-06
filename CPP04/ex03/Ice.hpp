/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanweber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 14:22:31 by sanweber          #+#    #+#             */
/*   Updated: 2024/12/17 14:23:24 by sanweber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

// Classe concreta Ice
class Ice : public AMateria
{
public:
    Ice();
    Ice(Ice const &other);
    Ice &operator=(Ice const &other);
    virtual ~Ice();

    // Clona a matéria
    virtual AMateria* clone() const;

    // Usa a matéria Ice
    virtual void use(ICharacter& target);
};

#endif
