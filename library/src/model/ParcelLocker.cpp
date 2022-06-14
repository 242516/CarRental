//
// Created by Piotr Rutkowski on 25/04/2022.
//

#include "model/ParcelLocker.h"

#include <utility>

ParcelLocker::ParcelLocker(Address *address, std::string  id):id(std::move(id)),address(address) {
    doorParcelMap.insert(std::pair<std::string, Parcel*>("1a", nullptr));
    doorParcelMap.insert(std::pair<std::string, Parcel*>("1b", nullptr));
    doorParcelMap.insert(std::pair<std::string, Parcel*>("1c", nullptr));
    doorParcelMap.insert(std::pair<std::string, Parcel*>("2a", nullptr));
    doorParcelMap.insert(std::pair<std::string, Parcel*>("2b", nullptr));
    doorParcelMap.insert(std::pair<std::string, Parcel*>("2c", nullptr));
    doorParcelMap.insert(std::pair<std::string, Parcel*>("3a", nullptr));
    doorParcelMap.insert(std::pair<std::string, Parcel*>("3b", nullptr));
    doorParcelMap.insert(std::pair<std::string, Parcel*>("3c", nullptr));
    doorParcelMap.insert(std::pair<std::string, Parcel*>("4a", nullptr));
    doorParcelMap.insert(std::pair<std::string, Parcel*>("4b", nullptr));
    doorParcelMap.insert(std::pair<std::string, Parcel*>("4c", nullptr));
    doorParcelMap.insert(std::pair<std::string, Parcel*>("5a", nullptr));
    doorParcelMap.insert(std::pair<std::string, Parcel*>("5b", nullptr));
    doorParcelMap.insert(std::pair<std::string, Parcel*>("5c", nullptr));
}

ParcelLocker::~ParcelLocker() {
 delete address;
}

const std::string &ParcelLocker::getId() const {
    return id;
}

const std::unordered_map<std::string, Parcel *> &ParcelLocker::getDoorParcelMap() const {
    return doorParcelMap;
}

Address *ParcelLocker::getAddress() const {
    return address;
}

void ParcelLocker::addParcel(const std::string& door, Parcel *parcel) {
    if(doorParcelMap.count(door) == 0) {
        throw DoorNotFloundExeption();
    } if (doorParcelMap.find(door) == doorParcelMap.end()) {
        throw DoorOcupiedExeption();
    }
    doorParcelMap.insert(std::pair<std::string, Parcel*>(door,parcel));
}

void ParcelLocker::collectParcel(const std::string& code) {
    for (auto door : doorParcelMap) {
        if (door.second != nullptr && door.second->getCode() == code) {
            door.second = nullptr;
            return;
        }
    }
    throw ParcelNotFoundExeption();
}
