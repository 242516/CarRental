//
// Created by Piotr on 14/06/2022.
//

#include "exception/ParcelNotFoundExeption.h"

char *ParcelNotFoundExeption::what() {
    return "Package not found";
}
