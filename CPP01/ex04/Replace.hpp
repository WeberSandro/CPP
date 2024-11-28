/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanweber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 10:19:10 by sanweber          #+#    #+#             */
/*   Updated: 2024/11/21 10:28:40 by sanweber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <string>
# include <fstream>

class Replace
{
public:
    // Construtor recebe o nome do arquivo, string a substituir (s1) e nova (s2)
    Replace(const std::string& filename, const std::string& s1, const std::string& s2);
    // Função principal para realizar a substituição
    void performReplacement();

private:
    std::string filename; // Nome do arquivo original
    std::string s1;       // String a ser substituída
    std::string s2;       // Nova string
    // Função auxiliar para substituir as ocorrências de s1 por s2 em uma linha
    std::string replaceLine(const std::string& line) const;
};

#endif
