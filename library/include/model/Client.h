//
// Created by Piotr Rutkowski on 18/04/2022.
//

#ifndef CARRENTAL_CLIENT_H
#define CARRENTAL_CLIENT_H
#include <model/Address.h>
#include <model/Client.h>
#include <model/ParcelLocker.h>
#include <iostream>
#include <vector>



class Client {
private:
    std::string firstName;
    std::string lastName;
    std::string phoneNumber;
    int id;
public:
    const std::string &getPhoneNumber() const;

    int getId() const;

    const std::string &getFirstName() const;

    void setFirstName(const std::string &firstName);

    const std::string &getLastName() const;

    void setLastName(const std::string &lastName);

    Client(std::string firstName, std::string lastName, std::string phoneNumber, int id);

    virtual ~Client();


};



#endif //CARRENTAL_CLIENT_H
