/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanweber <sanweber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 08:51:34 by sanweber          #+#    #+#             */
/*   Updated: 2024/11/22 09:47:37 by sanweber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
    std::cout << "[ DEBUG ]\nI love having extra bacon for my cheese-burger. I really do!\n" << std::endl;
}

void Harl::info(void)
{
    std::cout << "[ INFO ]\nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free. I’ve been coming for years!\n" << std::endl;
}

void Harl::error(void)
{
    std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

void Harl::complain(std::string level)
{
    typedef void (Harl::*HarlFunction)(void); // Define um tipo para o ponteiro de função membro
    // Tabela de ponteiros para métodos e os respectivos níveis
    const std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    HarlFunction actions[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    // Procura o nível correspondente na tabela
    for (int i = 0; i < 4; ++i)
    {
        if (levels[i] == level)
        {
            (this->*actions[i])(); // Chama o método correspondente
            return;
        }
    }
    // Caso o nível seja inválido
    std::cout << "[ INVALID LEVEL ]\nThe level \"" << level << "\" is not recognized.\n" << std::endl;
}