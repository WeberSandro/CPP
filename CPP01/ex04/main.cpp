/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanweber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 10:40:09 by sanweber          #+#    #+#             */
/*   Updated: 2024/11/21 10:47:19 by sanweber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"
#include <iostream>

int main(int argc, char* argv[])
{
    // Verificar o número de argumentos
    if (argc != 4)
   	{
        std::cerr << "Necessary: " << argv[0] << " <nome_do_arquivo> <string_s1> <string_s2>" << std::endl;
        return 1;
    }
    // Obter os argumentos
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    // Criar o objeto Replace e executar a substituição
    Replace replacer(filename, s1, s2);
    replacer.performReplacement();
    return 0;
}
