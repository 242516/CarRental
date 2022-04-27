//
// Created by Piotr Rutkowski on 18/04/2022.
//

#include "model/Client.h"

#include <utility>
Client::Client() {
}
std::string Client::getFullClientInfo() {
    std::string temp = "[";
    for(Rent *i : currentRents) {
        temp += i->getRentInfo() + ", ";
    }
    if (!currentRents.empty()) {
        temp.pop_back();
        temp.pop_back();
        temp += "]";
    }
    return "Client " + firstName + " " + lastName + " " + personalID + " " + address->getAddressInfo() + " " + temp;
}
std::string Client::getClientInfo() {
//    std::string temp = "[";
//    for(Rent *i : currentRents) {
//        temp += i->getRentInfo() + ", ";
//    }
//    if (!currentRents.empty()) {
//        temp.pop_back();
//        temp.pop_back();
//        temp += "]";
//    }
    return "Client " + firstName + " " + lastName + " " + personalID + " " + address->getAddressInfo();
}


Client::Client(std::string firstName, std::string lastName, std::string personalID, Address *address): firstName(std::move(firstName)), lastName(std::move(lastName)), address(address), personalID(std::move(personalID)) {
}

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

const std::string &Client::getPersonalId() const {
    return personalID;
}

Address *Client::getAddress() const {
    return address;
}

void Client::setAddress(Address *address) {
    if (address != nullptr) {
        Client::address = address;
    }
}

std::vector<Rent *> &Client::getCurrentRents() {
    return currentRents;
}

