/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanweber <sanweber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:42:13 by sanweber          #+#    #+#             */
/*   Updated: 2024/11/18 11:25:11 by sanweber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook()
{
    contact_count = 0;
	contact_total = 0;
}

void PhoneBook::add_contact()
{
	std::string fn, ln, nn, pn, ds;

    std::cout << "    Type your first name: ";
    std::getline(std::cin, fn);
    std::cout << "     Type your last name: ";
    std::getline(std::cin, ln);
    std::cout << "      Type your nickname: ";
    std::getline(std::cin, nn);
    std::cout << "  Type your phone number: ";
    std::getline(std::cin, pn);
    std::cout << "Type your darkest secret: ";
    std::getline(std::cin, ds);
	contact_count %= 8;
    if (contacts[contact_count].set_contact(fn, ln, nn, pn, ds))
   	{
        std::cout << "Contact added successfully.\n";
        contact_count++;
		if (contact_total < 8)
			contact_total++;
    }
}

void PhoneBook::search_contact() const
{
	int index;

    if (contact_total == 0)
   	{
        std::cout << "No contact available.\n";
        return;
    }
    std::cout << std::setw(10) << "     Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << " Last Name" << "|"
              << std::setw(10) << "  Nickname" << "\n";
    std::cout << "--------------------------------------------\n";
	for (int i = 0; i < contact_total; ++i)
		contacts[i].display_summary(i);
    std::cout << "Enter the contact index to display: ";
    std::cin >> index;
    if (std::cin.fail() || index < 1 || index > contact_total)
    {
		std::cin.clear();
		std::cin.ignore();
    	std::cout << "Invalid index.\n";
    }
    else
		contacts[index - 1].display_full();
}
