//
// Created by Piotr Rutkowski on 18/04/2022.
//

#include "model/Client.h"

#include <utility>


const std::string &Client::getFirstName() const {
    return firstName;
}

void Client::setFirstName(const std::string &firstName) {
    if(!firstName.empty()) {
        Client::firstName = firstName;
    }

}

const std::string &Client::getLastName() const {
    return lastName;
}

void Client::setLastName(const std::string &lastName) {
    if(!lastName.empty()) {
        Client::lastName = lastName;
    }
}

Client::Client(std::string firstName, std::string lastName, std::string phoneNumber, int id) : firstName(std::move(
        firstName)), lastName(std::move(lastName)), phoneNumber(std::move(phoneNumber)), id(id) {}

Client::~Client() {

}

const std::string &Client::getPhoneNumber() const {
    return phoneNumber;
}

int Client::getId() const {
    return id;
}



