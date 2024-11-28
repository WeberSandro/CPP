/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanweber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 15:31:33 by sanweber          #+#    #+#             */
/*   Updated: 2024/11/22 15:33:54 by sanweber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
    if (argc != 2)
   	{
        std::cerr << "Necessary: ./harlFilter <level>" << std::endl;
        return 1;
    }
    std::string level = argv[1];
    Harl harl;
    harl.complain(level);
    return 0;
}

