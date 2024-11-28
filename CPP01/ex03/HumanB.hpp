/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanweber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 09:05:43 by sanweber          #+#    #+#             */
/*   Updated: 2024/11/21 09:08:27 by sanweber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include "Weapon.hpp"

class HumanB
{
private:
    std::string name; // nome do humano
    Weapon* weapon; // ponteiro para a arma (pode ser nulo)

public:
    // Construtor que inicializa o humano sem arma
    HumanB(const std::string& name);
    // Define a arma do humano
    void setWeapon(Weapon& weapon);
    // Função que realiza o ataque
    void attack() const;
};

#endif
