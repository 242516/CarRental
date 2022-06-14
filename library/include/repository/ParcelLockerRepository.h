//
// Created by Piotr on 13/06/2022.
//

#ifndef CARRENTAL_PARCELLOCKERREPOSITORY_H
#define CARRENTAL_PARCELLOCKERREPOSITORY_H
#include "Repository.h"
#include "model/ParcelLocker.h"
#include "vector"
#include "algorithm"

class ParcelLockerRepository: public Repository<ParcelLocker>{
private:
    std::vector<ParcelLocker*>parcelLockers;
public:
    void add(ParcelLocker *t) override;
    void remove(ParcelLocker *t) override;

    virtual ~ParcelLockerRepository();
};


#endif //CARRENTAL_PARCELLOCKERREPOSITORY_H
