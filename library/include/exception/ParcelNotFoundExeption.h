//
// Created by Piotr on 14/06/2022.
//

#ifndef PACZKOMAT_PARCELNOTFOUNDEXEPTION_H
#define PACZKOMAT_PARCELNOTFOUNDEXEPTION_H
#include "iostream"

class ParcelNotFoundExeption: public std::exception{
public:
    char* what();
};


#endif //PACZKOMAT_PARCELNOTFOUNDEXEPTION_H
