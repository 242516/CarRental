//
// Created by Piotr on 13/06/2022.
//

#ifndef CARRENTAL_PARCELMANAGER_H
#define CARRENTAL_PARCELMANAGER_H
#include "model/Parcel.h"
#include "repository/ParcelRepository.h"
class ParcelManager {
private:
    ParcelRepository *parcelRepository;
public:
    static void changeStatus(Parcel *parcel, ParcelStatus parcelStatus);
    void add(Parcel *parcel);
    void remove(Parcel *parcel);

    virtual ~ParcelManager();
};


#endif //CARRENTAL_PARCELMANAGER_H
