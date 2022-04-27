//
// Created by Piotr Rutkowski on 26/04/2022.
//
#include <boost/test/unit_test.hpp>
#include <model/Rent.h>


BOOST_AUTO_TEST_CASE(ParameterConstrutorTestDefaultBeginTime) {
    const std::string oldCity = "Wadowice";
    const std::string oldStreet = "Kościelna";
    const std::string oldNumber = "7";
    const std::string oldFirstName = "Maciek";
    const std::string oldLastName = "Macikowski";
    std::string oldPlateNumber = "1234567";
    unsigned int oldBasePrice = 45;
    unsigned int oldId = 12;
    Vehicle *vehicle = new Vehicle(oldPlateNumber,oldBasePrice);
    Address *address = new Address(oldCity, oldStreet, oldNumber);
    Client *client = new Client(oldFirstName, oldLastName,"1234567898", address);
    Rent *r = new Rent(oldId, client, vehicle, boost::posix_time::not_a_date_time);

    boost::posix_time::ptime now = boost::posix_time::second_clock::local_time(); //hope this takes no longer than 59 secs...
    BOOST_TEST_REQUIRE(
            !r->getRentedAt().is_not_a_date_time()); //if this isn't met, the next check doesn't make sense...
    boost::posix_time::time_period skew = boost::posix_time::time_period(r->getRentedAt(), now);
    BOOST_TEST((skew.length().hours() == 0 && skew.length().minutes() == 0));

    delete r;
}