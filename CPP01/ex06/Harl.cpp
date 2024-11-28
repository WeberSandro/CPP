/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanweber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 15:35:24 by sanweber          #+#    #+#             */
/*   Updated: 2024/11/22 16:06:52 by sanweber         ###   ########.fr       */
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
	int	levelIndex;
    // Define um tipo para os ponteiros para métodos membro
    typedef void (Harl::*HarlFunction)(void);
    // Tabela de níveis e ponteiros correspondentes para funções membro
    const std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    HarlFunction actions[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    // Determina o índice do nível especificado
    levelIndex = 9;
    for (int i = 0; i < 4; ++i)
   	{
        if (levels[i] == level)
	   	{
            levelIndex = i;
            break;
        }
    }
    // Usa um switch para filtrar os níveis e exibir mensagens apropriadas
    switch (levelIndex)
   	{
    case 0: // DEBUG
        (this->*actions[0])();
        //fallthrough
    case 1: // INFO
        (this->*actions[1])();
        //fallthrough
    case 2: // WARNING
        (this->*actions[2])();
        //fallthrough
    case 3: // ERROR
        (this->*actions[3])();
        break;
    default: // Nível inválido
        std::cout << "[ Invalid level ]" << std::endl;
        break;
    }
}
