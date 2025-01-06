/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanweber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 15:25:20 by sanweber          #+#    #+#             */
/*   Updated: 2024/12/11 15:26:34 by sanweber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

// Construtor
WrongCat::WrongCat()
{
    type = "WrongCat"; // Define o tipo como "WrongCat"
    std::cout << "Construtor de WrongCat chamado!" << std::endl;
}

// Destrutor
WrongCat::~WrongCat()
{
    std::cout << "Destrutor de WrongCat chamado!" << std::endl;
}
