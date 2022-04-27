//
// Created by Piotr Rutkowski on 23/04/2022.
//

#ifndef CARRENTAL_ADDRESS_H
#define CARRENTAL_ADDRESS_H
#include <iostream>

class Address {
private:
    std::string city;
    std::string street;
    std::string number;
public:
    Address(std::string city, std::string street, std::string numebr);

    virtual ~Address();

    const std::string &getCity() const;

    void setCity(const std::string &city);

    const std::string &getStreet() const;

    void setStreet(const std::string &street);

    const std::string &getNumber() const;

    void setNumber(const std::string &number);

    std::string getAddressInfo();

};



#endif //CARRENTAL_ADDRESS_H
