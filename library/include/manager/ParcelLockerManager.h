//
// Created by Piotr on 13/06/2022.
//

#ifndef CARRENTAL_PARCELLOCKERMANAGER_H
#define CARRENTAL_PARCELLOCKERMANAGER_H
#include "model/ParcelLocker.h"
#include "repository/ParcelLockerRepository.h"
class ParcelLockerManager {
private:
    ParcelLockerRepository *parcelLockerRepository;
public:
    void add(ParcelLocker *parcelLocker);
    void remove(ParcelLocker *parcelLocker);
    static void collectParcel(ParcelLocker *parcelLocker,const std::string& code);

    virtual ~ParcelLockerManager();
};


#endif //CARRENTAL_PARCELLOCKERMANAGER_H
