//
// Created by Piotr on 13/06/2022.
//

#include "manager/ParcelLockerManager.h"


void ParcelLockerManager::remove(ParcelLocker *parcelLocker) {
    parcelLockerRepository->remove(parcelLocker);
}



void ParcelLockerManager::add(ParcelLocker *parcelLocker) {
   parcelLockerRepository->add(parcelLocker);
}

void ParcelLockerManager::collectParcel(ParcelLocker *parcelLocker, const std::string& code) {
    parcelLocker->collectParcel(code);
}

ParcelLockerManager::~ParcelLockerManager() {
    delete parcelLockerRepository;
}
