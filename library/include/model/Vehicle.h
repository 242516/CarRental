//
// Created by Piotr Rutkowski on 25/04/2022.
//

#ifndef CARRENTAL_VEHICLE_H
#define CARRENTAL_VEHICLE_H
#include <iostream>

//Utwórz klasę Vehicle, która będzie reprezentować pojazdy. Pojazd ma dwa zmienialne atrybuty: tekstowy plateNumber
//(numer rejestracyjny) oraz całkowity nieujemny basePrice (cena za 1 dobę wypożyczenia). Podobnie jak poprzednio
//zaimplementuj konstruktor parametrowy, gettery i settery, pamiętaj o idiomie (const!). W setterze plateNumber
//zapobiegaj ustawieniu pustego napisu jako numeru rejestracyjnego, zaimplementuj odpowiednie testy tworząc dla
//nich odrębny zestaw testów w odrębnym pliku. Zaimplementuj także metodę getVehicleInfo() tak jak w dotychczasowych
//klasach.

//W klasie Vehicle dodaj pole rented typu logicznego. Pole to powinno mieć wartość domyślną fałszu i nie być inicjowane
//przez konstruktor. W oczywisty sposób wartość tego pola może zmieniać się w ciągu cyklu życia obiektu, uwzględniając to
//zaimplementuj metody dostępowe dla tego pola. W przypadku gettera możesz posłużyć się standardowym idiomem getRented()
//lub specjalnym idiomem dla atrybutów logicznych - isRented().

class Vehicle {
public:
    Vehicle(std::string, unsigned int);

    virtual ~Vehicle();

    const std::string &getPlateNumber() const;

    void setPlateNumber(const std::string &plateNumber);

    unsigned int getBasePrice() const;

    void setBasePrice(unsigned int basePrice);

    std::string getVehicleInfo();

private:
    std::string plateNumber;
    unsigned int basePrice{};
    bool rented = false;
public:
    bool isRented() const;

    void setRented(bool rented);
};


#endif //CARRENTAL_VEHICLE_H
