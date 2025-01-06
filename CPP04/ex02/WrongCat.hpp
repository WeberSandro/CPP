/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanweber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 15:27:01 by sanweber          #+#    #+#             */
/*   Updated: 2024/12/11 15:28:59 by sanweber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

// Classe derivada WrongCat
class WrongCat : public WrongAnimal
{
public:
    // Construtor
    WrongCat();

    // Destrutor
    ~WrongCat();
};

#endif
