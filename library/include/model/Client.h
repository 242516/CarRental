//
// Created by Piotr Rutkowski on 18/04/2022.
//

#ifndef CARRENTAL_CLIENT_H
#define CARRENTAL_CLIENT_H
#include <model/Address.h>
#include <model/Client.h>
#include <model/Rent.h>
#include <iostream>
#include <vector>

//Dodaj do klasy Client pola: imię (firstName), nazwisko (lastName), numer pesel (personalID). Modyfikatory dostępu do pól ustaw zgodnie z domyślną zasadą hermetyzacji.
//Dodaj do klasy Client publiczną metodę getClientInfo() zwracającą łańcuch znaków składający się z nazwy klasy, imienia, nazwiska, numeru pesel (możesz wykorzystać konkatenację lub strumień stringstream).
//W przypadku wątpliwości posłuż się poniższym diagramem: (uwaga: nie jest to pełen diagram klasy Client - zawiera tylko omawiane tu składowe)

//W klasie Client dodaj pole currentRents umożliwiające przechowywanie zbioru aktualnych (rozpoczętych i jeszcze nie
//zakończonych) wypożyczeń. Zauważ, że liczność tego zbioru jest zmienna w czasie, zatem mamy tu do czynienia z tablicą
//dynamiczną; użyj reprezentacji wektora dostępnej w bibliotece standardowej STL.
//
//Wskazówka: zauważ, że od tego momentu klasy Client i Rent muszą wzajemnie znać swoje typy. W kompilacji
//jednoprzebiegowej, jaka zachodzi w C++, jest to problem, który musisz rozwiązać stosując tzw. deklaracje zapowiadające
//tych klas.
class Rent;
class Client {
private:
    std::string firstName;
    std::string lastName;
    Address *address;
    std::vector<Rent *>currentRents;
public:
    std::vector<Rent *> &getCurrentRents();

public:

    const std::string &getFirstName() const;

    void setFirstName(const std::string &firstName);

    const std::string &getLastName() const;

    void setLastName(const std::string &lastName);

    const std::string &getPersonalId() const;

private:
    const std::string personalID;
public:
    Client();
    Client(std::string firstName, std::string lastName, std::string personalID, Address *address);

    Address *getAddress() const;

    void setAddress(Address *address);

    std::string getClientInfo();
    std::string getFullClientInfo();

};



#endif //CARRENTAL_CLIENT_H
