//
// Created by Piotr Rutkowski on 25/04/2022.
//

#ifndef CARRENTAL_PARCEL_H
#define CARRENTAL_PARCEL_H
#include <iostream>
#include "set"


enum ParcelStatus {
    NADANA,
    ODEBRANA_PRZEZ_KURIERA,
    W_DRODZE,
    SORTOWNIA,
    WYSLANA_DO_SORTOWNI,
    PRZYJETA_W_ODDZIALE,
    WYDANA_DO_DORECZENIA,
    GOTOWA_DO_ODBIORU,
    ODEBRANA,
    UPLYWA_TERMIN_ODBIORU,
    UPLYNOL_TERMIN_ODBIORU,
    POWROT_DO_ODZIALU,
    PACZKA_CZEKA_W_ODZIALE,
    ZWROT_DO_NADAWCY
};
enum ParcelType {
    WRAZLIWA_NA_WILGOTNOSC,
    DELIKATNA,
    DOKUMENTY
};

class Parcel {
private:
    std::string id;
    float weight;
    float sizeX;
    float sizeY;
    float sizeZ;
    std::string code;
    ParcelStatus status;
    std::set<ParcelType>types;
public:
    Parcel(std::string id, float weight, float sizeX,float sizeY,float sizeZ, std::string code,std::set<ParcelType>types);
    std::string toString();
    virtual ~Parcel();

    const std::string &getId() const;

    float getWeight() const;

    float getSizeX() const;

    float getSizeY() const;

    float getSizeZ() const;

    const std::string &getCode() const;

    ParcelStatus getStatus() const;

    void setStatus(ParcelStatus status);


};


#endif //CARRENTAL_PARCEL_H
