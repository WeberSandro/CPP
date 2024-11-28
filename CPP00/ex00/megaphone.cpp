/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanweber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:03:26 by sanweber          #+#    #+#             */
/*   Updated: 2024/11/15 13:24:40 by sanweber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <algorithm>

int main(int argc, char* argv[])
{
	int	i;

    if (argc < 2)
   	{
        std::cerr << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 1;
    }
    std::string frase;
	i = 0;
	while (++i < argc)
	{
		if (i > 1)
			frase += " ";
		frase += argv[i];
	}
    // change to uppercase
    std::transform(frase.begin(), frase.end(), frase.begin(), ::toupper);
    // print
    std::cout << frase << std::endl;
    return 0;
}
