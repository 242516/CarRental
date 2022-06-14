//
// Created by Piotr on 14/06/2022.
//

#ifndef PACZKOMAT_DOOROCUPIEDEXEPTION_H
#define PACZKOMAT_DOOROCUPIEDEXEPTION_H
#include "iostream"

class DoorOcupiedExeption: public std::exception{
public:
    char* what();
};


#endif //PACZKOMAT_DOOROCUPIEDEXEPTION_H
