/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanweber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 09:15:26 by sanweber          #+#    #+#             */
/*   Updated: 2024/11/21 09:24:47 by sanweber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
	// Criação de uma arma e humano A armado
    Weapon club = Weapon("crude spiked club");
    HumanA bob("Bob", club);
    // Ataque inicial
    bob.attack();
    // Alteração do tipo da arma
    club.setType("some other type of club");
    // Ataque após alterar a arma
    bob.attack();}
    {
    // Criação de uma arma e humano B sem arma inicialmente
    Weapon club = Weapon("crude spiked club");
    HumanB jim("Jim");
    // Definir a arma para o humano B
    jim.setWeapon(club);
    // Ataque inicial
    jim.attack();
    // Alteração do tipo da arma
    club.setType("some other type of club");
    // Ataque após alterar a arma
    jim.attack();}

    return 0;
}
