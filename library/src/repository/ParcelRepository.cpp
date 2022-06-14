//
// Created by Piotr on 13/06/2022.
//

#include "repository/ParcelRepository.h"

void ParcelRepository::add(Parcel *t) {
    parcels.push_back(t);
}

void ParcelRepository::remove(Parcel *t) {
    if (std::count(parcels.begin(), parcels.end(),t)) {
        parcels.erase(std::remove(parcels.begin(), parcels.end(),t), parcels.end());
    }
}

ParcelRepository::~ParcelRepository() {
    for (auto parcel : parcels) {
        delete parcel;
    }
}
