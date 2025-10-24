/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hparveen <hparveen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 08:32:35 by hparveen          #+#    #+#             */
/*   Updated: 2025/10/24 09:46:59 by hparveen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook() : contactCount(0), oldestIndex(0) {
}

PhoneBook::~PhoneBook() {
}

void PhoneBook::addContact() {
    std::string input;
    Contact newContact;
    
    std::cout << "Enter First Name: ";
    std::getline(std::cin, input);
    if(input.empty()) {
        std::cout << "First Name cannot be empty, contact not added." << std::endl;
        return;
    }
    newContact.setFirstName(input);
    
    std::cout << "Enter Last Name: ";
    std::getline(std::cin, input);
    if(input.empty()) {
        std::cout << "Last Name cannot be empty, contact not added." << std::endl;
        return;
    }
    newContact.setLastName(input);

    std::cout << "Enter Nickname: ";
    std::getline(std::cin, input);
    if(input.empty()) {
        std::cout << "Nickname cannot be empty, contact not added." << std::endl;
        return;
    }
    newContact.setNickname(input);
    
    std::cout << "Enter Phone Number: ";
    std::getline(std::cin, input);
    if(input.empty()) {
        std::cout << "Phone Number cannot be empty, contact not added." << std::endl;
        return;
    }
    newContact.setPhoneNumber(input);
    
    std::cout << "Enter Darkest Secret: ";
    std::getline(std::cin, input);
    if(input.empty()) {
        std::cout << "Darkest Secret cannot be empty, contact not added." << std::endl;
        return;
    }
    newContact.setDarkestSecret(input);

    if(contactCount < 8) {
        contacts[contactCount] = newContact;
        contactCount++;
    }
    else {
        contacts[oldestIndex] = newContact;
        oldestIndex = (oldestIndex + 1) % 8;
    }

    std::cout << "Contact added successfully!" << std::endl;
}

static std::string truncate(const std::string &str) {
    if(str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

void PhoneBook::searchContacts() const {
    if(contactCount == 0){
        std::cout << "Phonebook is empty. No contacts to display." << std::endl;
        return;
    }
    std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << std::endl;
    std::cout << "--------------------------------------------" << std::endl;
        
    for(int i = 0; i < contactCount; i++) {
        std::cout << std::setw(10) << i << "|"
                  << std::setw(10) << truncate(contacts[i].getFirstName()) << "|"
                  << std::setw(10) << truncate(contacts[i].getLastName()) << "|"
                  << std::setw(10) << truncate(contacts[i].getNickname()) << std::endl;
    }
        
    std::cout << "Enter the index of the contact to view details: ";
    int index;
    std::cin >> index;

    if(std::cin.fail() || index < 0 || index >= contactCount) {
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        std::cout << "Invalid input!" << std::endl;
        return;
    }
    std::cin.ignore(10000, '\n');
    displayContact(index);
}
        
void PhoneBook::displayContact(int index) const {
    std::cout << "First Name: " << contacts[index].getFirstName() << std::endl;
    std::cout << "Last Name: " << contacts[index].getLastName() << std::endl;
    std::cout << "Nickname: " << contacts[index].getNickname() << std::endl;
    std::cout << "Phone Number: " << contacts[index].getPhoneNumber() << std::endl;
    std::cout << "Darkest Secret: " << contacts[index].getDarkestSecret() << std::endl;
}
