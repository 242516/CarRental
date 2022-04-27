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
#include <model/Vehicle.h>
#include <model/Rent.h>
#include<iostream>
#include <boost/date_time.hpp>

using namespace std;
namespace pt = boost::posix_time;
namespace gr = boost::gregorian;

int main()
{
    pt::ptime empty = pt::not_a_date_time;
    cout << empty << endl;
    pt::ptime now = pt::second_clock::local_time();
    cout << now << endl;
    pt::ptime then = pt::ptime(gr::date(2015,5,13),pt::hours(9)+pt::minutes(25));
    cout << then << endl;
    pt::time_period period(then, now);
    cout << period << endl;
    cout << period.length() << endl;
    cout << period.length().hours() << endl;
    cout << period.length().minutes() << endl;
    cout << (then>now) << endl;
    cout << (then<=now) << endl;

    // konwersja ptime na string z użyciem stringstream
    std::stringstream ss;
    ss << now;
    string s = ss.str();
    cout << s << endl;

    Vehicle *vehicle = new Vehicle("WD32432",23);
    Address *address = new Address("Miasto", "droga" , "12d");
    Client *client = new Client("Damian", "Damianowski", "12345678", address);
    Rent *rent = new Rent(1488, client, vehicle, boost::posix_time::ptime(boost::posix_time::ptime(boost::posix_time::time_from_string("2022-Apr-19 17:11:31"))));
    rent->endRent();
    std::cout << rent->getRentCost()  << std::endl;

    return 0;
}