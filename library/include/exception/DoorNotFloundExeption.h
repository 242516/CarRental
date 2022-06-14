//
// Created by Piotr on 14/06/2022.
//

#ifndef CARRENTAL_EXCEPTIONS_H
#define CARRENTAL_EXCEPTIONS_H
#include "iostream"

class DoorNotFloundExeption: public std::exception{
public:
    char* what();
};


#endif //CARRENTAL_EXCEPTIONS_H
