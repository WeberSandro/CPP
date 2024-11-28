/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanweber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 16:54:00 by sanweber          #+#    #+#             */
/*   Updated: 2024/11/19 16:59:07 by sanweber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
private:
    std::string name; // Nome zumbi

public:
    Zombie();                       // Construtor
    ~Zombie();                      // Destrutor
    void setName(std::string name); // Definir nome do zumbi
    void announce() const;          // Zumbi se anuncia
};

#endif
