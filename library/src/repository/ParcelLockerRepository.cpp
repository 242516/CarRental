//
// Created by Piotr on 13/06/2022.
//

#include "repository/ParcelLockerRepository.h"

void ParcelLockerRepository::add(ParcelLocker *t) {
    parcelLockers.push_back(t);
}

void ParcelLockerRepository::remove(ParcelLocker *t) {
    if (std::count(parcelLockers.begin(), parcelLockers.end(),t)) {
        parcelLockers.erase(std::remove(parcelLockers.begin(), parcelLockers.end(),t), parcelLockers.end());
    }
}

ParcelLockerRepository::~ParcelLockerRepository() {
    for (auto parcelLocker :parcelLockers) {
        delete parcelLocker;
    }
}
