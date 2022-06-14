//
// Created by Piotr Rutkowski on 01/04/2022.
//

//Czy obecna implementacja rzeczywiście spełnia ten warunek? Utwórz test przebiegający według następującego scenariusza:
//
//Utwórz obiekty Pojazdu, Klienta oraz łączącego je Wypożyczenia
//        Zakończ wypożyczenie tak, aby jego koszt był niezerowy; zapamiętaj koszt wypożyczenia
//        Zmień cenę wypożyczenia Pojazdu
//        Sprawdź, czy obecny koszt Wypożyczenia pozostał bez zmian


#include <model/Client.h>
#include <model/Parcel.h>
#include <model/ParcelLocker.h>
#include<iostream>
#include <boost/date_time.hpp>

int main()
{
    Parcel parcel("id",10,12,12,12,"2e",std::set<ParcelType>{WRAZLIWA_NA_WILGOTNOSC});
    std::cout << parcel.toString();
    return 0;
}