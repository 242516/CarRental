//
// Created by Piotr on 13/06/2022.
//

#ifndef CARRENTAL_PARCELREPOSITORY_H
#define CARRENTAL_PARCELREPOSITORY_H
#include "Repository.h"
#include "model/Parcel.h"
#include "vector"
#include "algorithm"

class ParcelRepository: public Repository<Parcel>{
private:
    std::vector<Parcel*>parcels;
public:
    void add(Parcel *t) override;
    void remove(Parcel *t) override;

    virtual ~ParcelRepository();
};


#endif //CARRENTAL_PARCELREPOSITORY_H
