//
// Created by Piotr Rutkowski on 25/04/2022.
//

#include "model/Vehicle.h"

const std::string &Vehicle::getPlateNumber() const {
    return plateNumber;
}

void Vehicle::setPlateNumber(const std::string &plateNumber) {
    if (!plateNumber.empty()) {
        Vehicle::plateNumber = plateNumber;
    }
}

unsigned int Vehicle::getBasePrice() const {
    return basePrice;
}

void Vehicle::setBasePrice(unsigned int basePrice) {
    Vehicle::basePrice = basePrice;
}

Vehicle::Vehicle(std::string plateNumber, unsigned int basePrice) {
    this->basePrice = basePrice;
    this->plateNumber = plateNumber;
}

Vehicle::~Vehicle() {

}

std::string Vehicle::getVehicleInfo() {
    return "Vehicle info " + plateNumber + " " + std::to_string(basePrice);
}

bool Vehicle::isRented() const {
    return rented;
}

void Vehicle::setRented(bool rented) {
    Vehicle::rented = rented;
}


