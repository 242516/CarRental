//
// Created by Piotr Rutkowski on 25/04/2022.
//

#ifndef CARRENTAL_PARCELLOCKER_H
#define CARRENTAL_PARCELLOCKER_H
#include <model/Client.h>
#include <model/Parcel.h>
#include <boost/date_time.hpp>
#include "Address.h"
#include "unordered_map"
#include "Parcel.h"
#include "exception/DoorNotFloundExeption.h"
#include "exception/DoorOcupiedExeption.h"
#include "exception/ParcelNotFoundExeption.h"
#include "algorithm"

class ParcelLocker {
private:
   std::string id;
   std::unordered_map<std::string,Parcel*> doorParcelMap;
   Address* address;
public:
    ParcelLocker(Address *address,std::string  id);

    virtual ~ParcelLocker();

    const std::string &getId() const;

    const std::unordered_map<std::string, Parcel *> &getDoorParcelMap() const;

    Address *getAddress() const;

    void addParcel(const std::string& door,Parcel*);

    void collectParcel(const std::string& code);



};


#endif //CARRENTAL_PARCELLOCKER_H
