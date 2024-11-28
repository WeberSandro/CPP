/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanweber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 10:29:18 by sanweber          #+#    #+#             */
/*   Updated: 2024/11/21 10:39:51 by sanweber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"
#include <iostream>

// Construtor que inicializa os atributos da classe
Replace::Replace(const std::string& filename, const std::string& s1, const std::string& s2)
    : filename(filename), s1(s1), s2(s2) {}
// Função principal que realiza a substituição
void Replace::performReplacement()
{
    // Verificar se s1 não está vazio
    if (s1.empty())
   	{
        std::cerr << "A string a ser substituída (s1) não pode estar vazia." << std::endl;
        return;
    }
    // Abrir o arquivo original para leitura
    std::ifstream inputFile(filename.c_str());
    if (!inputFile.is_open())
   	{
        std::cerr << "Erro ao abrir o arquivo: " << filename << std::endl;
        return;
    }
    // Criar o arquivo de saída com o sufixo ".replace"
    std::ofstream outputFile((filename + ".replace").c_str());
    if (!outputFile.is_open())
   	{
        std::cerr << "Erro ao criar o arquivo de saída: " << filename << ".replace" << std::endl;
        inputFile.close();
        return;
    }
    // Ler o arquivo linha por linha e realizar a substituição
    std::string line;
    while (std::getline(inputFile, line))
   		outputFile << replaceLine(line) << "\n";
    // Fechar os arquivos
    inputFile.close();
    outputFile.close();
    std::cout << "Substituição concluída. Arquivo gerado: " << filename << ".replace" << std::endl;
}

// Função auxiliar p/ substituir todas as ocorrências de s1 por s2 em uma linha
std::string Replace::replaceLine(const std::string& line) const
{
    std::string	result;
    size_t		pos = 0;
    size_t		found;

    // Procurar por ocorrências de s1 na linha
    while ((found = line.find(s1, pos)) != std::string::npos)
   	{
        // Copiar a parte antes da ocorrência de s1
        result.append(line, pos, found - pos);
        // Adicionar s2 no lugar de s1
        result.append(s2);
        // Atualizar a posição
        pos = found + s1.length();
    }
    // Adicionar o restante da linha após a última ocorrência de s1
    result.append(line, pos, line.length() - pos);
    return result;
}
