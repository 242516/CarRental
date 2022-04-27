//
// Created by Piotr Rutkowski on 25/04/2022.
//

#ifndef CARRENTAL_RENT_H
#define CARRENTAL_RENT_H
#include <model/Client.h>
#include <model/Vehicle.h>
#include <boost/date_time.hpp>

//Utwórz klasę Rent, która będzie reprezentować fakt wypożyczenia. Póki co jedynym atrybutem klasy Rent będzie
//identyfikator, będący liczbą całkowitą nieujemną (pole id). Ponadto obiekt Rent ma odwzorować asocjacje z obiektami
//Client oraz Vehicle, reprezentowane przez odpowiednie wskaźniki (pola client i vehicle). Zauważ, że w tym przypadku
//obiekty Klienta oraz Pojazdu muszą być współdzielone co najmniej z innymi obiektami Wypożyczeń, więc w praktyce muszą
//być reprezentowane przez wskaźniki. Wszystkie te pola mają być ustawiane przez konstruktor parametrowy oraz
//niezmienialne (jako wartość pola, same obiekty Client i Vehicle pozostają zmienialne), zaimplementuj dla nich
//gettery (pamiętając o ich oznaczeniu jako const). Ponadto zaimplementuj metodę getRentInfo(), która zwróci napis
//będący złączeniem wartości pola id oraz informacji o obiektach Klienta i Pojazdu, pamiętaj o zasadzie DRY.

class Client;
class Rent {
private:
    unsigned int id;
    Client *client;
    Vehicle *vehicle;
    boost::posix_time::ptime rentedAt;
    unsigned int rentCost = 0;
public:
    const boost::posix_time::ptime &getRentEndedAt() const;

private:
    boost::posix_time::ptime rentEndedAt;
public:
    Rent(unsigned int,Client* ,Vehicle*, boost::posix_time::ptime);

    unsigned int getId() const;

    Client *getClient() const;

    Vehicle *getVehicle() const;

    std::string getRentInfo();

    int getRentDays();

    const boost::posix_time::ptime &getRentedAt() const;

    void endRent();

    unsigned int getRentCost();

};


#endif //CARRENTAL_RENT_H
