/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanweber <sanweber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:51:30 by sanweber          #+#    #+#             */
/*   Updated: 2024/11/13 15:10:42 by sanweber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

bool Contact::set_contact(const std::string& fn, const std::string& ln, const std::string& nn, const std::string& pn, const std::string& ds)
{
    if (fn.empty() || ln.empty() || nn.empty() || pn.empty() || ds.empty())
	{
        std::cout << "Error: all fields must be filled in.\n";
        return false;
    }
    first_name = fn.substr(0, 50);
    last_name = ln.substr(0, 50);
    nickname = nn.substr(0, 50);
    phone_number = pn.substr(0, 15);
    darkest_secret = ds.substr(0, 50);
    return true;
}

void Contact::display_full() const
{
    std::cout << "     First Name: " << first_name << "\n";
    std::cout << "      Last Name: " << last_name << "\n";
    std::cout << "       Nickname: " << nickname << "\n";
    std::cout << "   Phone Number: " << phone_number << "\n";
    std::cout << "Darkness Secret: " << darkest_secret << "\n";
}

void Contact::display_summary(int index) const
{
    std::cout << std::setw(10) << (index + 1) << "|"
              << std::setw(10) << truncate(first_name) << "|"
              << std::setw(10) << truncate(last_name) << "|"
              << std::setw(10) << truncate(nickname) << "\n";
}

std::string Contact::truncate(const std::string& str) const
{
	if (str.length() > 10)
        return str.substr(0,9) + ".";
	else
		return str;
}
