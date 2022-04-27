//
// Created by Piotr Rutkowski on 25/04/2022.
//

#include "model/Rent.h"

Rent::Rent(unsigned int id, Client *client, Vehicle *vehicle, boost::posix_time::ptime rentedAt) {
    Rent::id = id;
    Rent::client = client;
    Rent::vehicle = vehicle;
    rentEndedAt = boost::posix_time::not_a_date_time;
    vehicle->setRented(true);
    if (rentedAt.is_not_a_date_time()) {
        Rent::rentedAt = boost::posix_time::second_clock ::local_time();
    } else {
        Rent::rentedAt = rentedAt;
    }
}

void Rent::endRent() {
    Rent::vehicle->setRented(false);
    Rent::rentCost = Rent::vehicle->getBasePrice() * getRentDays();
    std::remove(Rent::client->getCurrentRents().begin(), Rent::client->getCurrentRents().end(),this);
}

const boost::posix_time::ptime &Rent::getRentedAt() const {
    return rentedAt;
}

unsigned int Rent::getId() const {
    return id;
}

Client *Rent::getClient() const {
    return client;
}

Vehicle *Rent::getVehicle() const {
    return vehicle;
}

std::string Rent::getRentInfo() {
    return "Rent info " + std::to_string(id) + " " + client->getClientInfo() + " " + vehicle->getVehicleInfo();
}

int Rent::getRentDays() {
    if (vehicle->isRented()) {
        return 0;
    } else {
        boost::posix_time::time_period period(rentedAt, boost::posix_time::second_clock ::local_time());
        if (period.length().minutes() == 1) {
            return 0;
        } else {
            int daysRented = period.length().hours() / 24;
            return daysRented + 1;
        }
    }
}

const boost::posix_time::ptime &Rent::getRentEndedAt() const {
    return rentEndedAt;
}

unsigned int Rent::getRentCost() {
    return Rent::rentCost;
}
