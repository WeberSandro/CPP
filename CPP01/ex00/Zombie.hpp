/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanweber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:16:25 by sanweber          #+#    #+#             */
/*   Updated: 2024/11/19 15:15:41 by sanweber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
private:
    std::string name; // Atributo privado para o nome do zumbi

public:
    // Construtor para inicializar o nome
    Zombie(std::string zombieName);

    // Destrutor que imprime uma mensagem ao destruir o zumbi
    ~Zombie();

    // Função para o zumbi se anunciar
    void announce() const;
};

#endif
