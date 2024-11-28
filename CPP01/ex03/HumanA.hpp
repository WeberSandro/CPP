/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanweber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 09:01:56 by sanweber          #+#    #+#             */
/*   Updated: 2024/11/21 09:04:52 by sanweber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <string>
# include "Weapon.hpp"

class HumanA
{
private:
    std::string name; // nome do humano
    Weapon& weapon; // referencia para a arma (sempre armada)

public:
    // Construtor que inicializa o humano e sua arma
    HumanA(const std::string& name, Weapon& weapon);
    // Função que realiza o ataque
    void attack() const;
};

#endif
