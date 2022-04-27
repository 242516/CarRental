//
// Created by Piotr Rutkowski on 23/04/2022.
//

#include "model/Address.h"

#include <utility>

Address::Address(std::string city, std::string street, std::string numebr) {
    this->city = std::move(city);
    this->street = std::move(street);
    this->number = std::move(numebr);
}

const std::string &Address::getCity() const {
    return city;
}

void Address::setCity(const std::string &city) {
    Address::city = city;
}

const std::string &Address::getStreet() const {
    return street;
}

void Address::setStreet(const std::string &street) {
    Address::street = street;
}

const std::string &Address::getNumber() const {
    return number;
}

void Address::setNumber(const std::string &number) {
    Address::number = number;
}

std::string Address::getAddressInfo() {
    return std::string("Address " + city + " " + street + " " + number);
}

Address::~Address() {

}

