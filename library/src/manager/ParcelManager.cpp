//
// Created by Piotr on 13/06/2022.
//

#include "manager/ParcelManager.h"



void ParcelManager::add(Parcel *parcel) {
    parcelRepository->add(parcel);
}

void ParcelManager::remove(Parcel *parcel) {
    parcelRepository->remove(parcel);
}

void ParcelManager::changeStatus(Parcel *parcel, ParcelStatus parcelStatus) {
    parcel->setStatus(parcelStatus);
}

ParcelManager::~ParcelManager() {
    delete parcelRepository;
}
