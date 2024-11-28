/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanweber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 08:56:00 by sanweber          #+#    #+#             */
/*   Updated: 2024/11/21 08:58:46 by sanweber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon
{
private:
    std::string type; // tipo de arma

public:
    // Construtor que inicializa o tipo da arma
    Weapon(const std::string& type);
    // Função que retorna o tipo da arma (referência constante)
    const std::string& getType() const;
    // Função que altera o tipo da arma
    void setType(const std::string& newType);
};

#endif
