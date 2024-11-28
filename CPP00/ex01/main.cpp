/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanweber <sanweber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:48:51 by sanweber          #+#    #+#             */
/*   Updated: 2024/11/18 10:52:07 by sanweber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

void show_menu()
{
    std::cout << "\n------- PhoneBook -------\n";
    std::cout << "1 - ADD (add new contact)\n";
    std::cout << "2 - SEARCH (search and display contact)\n";
    std::cout << "3 - EXIT (exit the program)\n";
    std::cout << "choose the option: ";
}

int main()
{
    PhoneBook	phonebook;
    std::string choice;

    while (true)
   	{
        show_menu();
        std::cin >> choice;
        std::cin.ignore();
		if (choice == "1")
			phonebook.add_contact();
		else if (choice == "2")
			phonebook.search_contact();
		else if (choice == "3")
		{
			std::cout << "exit, all contacts lost\n";
			return 0;
		}
		else
			std::cout << "invalid option, just type 1, 2 or 3\n";
    }
}
