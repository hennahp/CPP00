/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hparveen <hparveen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 10:24:36 by hparveen          #+#    #+#             */
/*   Updated: 2025/10/24 09:53:12 by hparveen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>

int main() 
{
    PhoneBook phoneBook;
    std::string command;

    std::cout << "Welcome to the PhoneBook!" << std::endl;
    std::cout << "Available commands: ADD, SEARCH, EXIT" << std::endl;

    while(true)
    {
        std::cout << "\nEnter command: ";
        std::getline(std::cin, command);

        if(std::cin.eof())
        {
            std::cout << "\nEOF detected. Exiting..." << std::endl;
            break;
        }
        if(command == "ADD")
        {
            phoneBook.addContact();
        }
        else if(command == "SEARCH")
        {
            phoneBook.searchContacts();
        }
        else if(command == "EXIT")
        {
            std::cout << "Exiting PhoneBook. Goodbye!" << std::endl;
            break;
        }
        else
        {
            std::cout << "Invalid command! Please use ADD, SEARCH, or EXIT." << std::endl;
        }
    }
    return 0;
}
