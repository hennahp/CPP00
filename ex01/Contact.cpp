/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hparveen <hparveen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 08:05:28 by hparveen          #+#    #+#             */
/*   Updated: 2025/10/24 09:47:22 by hparveen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() { 
}

Contact::~Contact(){
}

std::string Contact::getFirstName() const {
    return firstName;
}
std::string Contact::getLastName() const {
    return lastName;
}
std::string Contact::getNickname() const {
    return nickname;
}
std::string Contact::getPhoneNumber() const {
    return phoneNumber;
}
std::string Contact::getDarkestSecret() const {
    return darkestSecret;
}

void Contact::setFirstName(const std::string &firstName) {
    this->firstName = firstName;
}
void Contact::setLastName(const std::string &lastName) {
    this->lastName = lastName;
}
void Contact::setNickname(const std::string &nickname) {
    this->nickname = nickname;
}
void Contact::setPhoneNumber(const std::string &phoneNumber) {
    this->phoneNumber = phoneNumber;
}
void Contact::setDarkestSecret(const std::string &darkestSecret) {
    this->darkestSecret = darkestSecret;
}
