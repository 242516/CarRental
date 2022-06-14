//
// Created by Piotr Rutkowski on 25/04/2022.
//

#include "model/Parcel.h"

#include <utility>
#include "sstream"

Parcel::Parcel(std::string id, float weight, float sizeX,float sizeY,float sizeZ, std::string  code, std::set<ParcelType>types) : id(std::move(id)), weight(weight),
                                                                                          sizeX(sizeX),sizeY(sizeY),sizeZ(sizeZ), code(std::move(code)), types(std::move(types)) {
    status = NADANA;
}

Parcel::~Parcel() {

}

std::string Parcel::toString() {
    std::stringstream out;
    out << "Parcel: id " << id << ", weight " << weight << ", sizeX " << sizeX << ", sizeY " << sizeY << ", sizeZ " << sizeZ << ", code " << code << "\n";
    return out.str();
}

const std::string &Parcel::getId() const {
    return id;
}

float Parcel::getWeight() const {
    return weight;
}

float Parcel::getSizeX() const {
    return sizeX;
}

float Parcel::getSizeY() const {
    return sizeY;
}

float Parcel::getSizeZ() const {
    return sizeZ;
}

const std::string &Parcel::getCode() const {
    return code;
}

ParcelStatus Parcel::getStatus() const {
    return status;
}

void Parcel::setStatus(ParcelStatus status) {
    Parcel::status = status;
}
