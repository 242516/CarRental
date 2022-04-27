//
// Created by Piotr Rutkowski on 24/04/2022.
//

#include <boost/test/unit_test.hpp>
#include <model/Address.h>


BOOST_AUTO_TEST_SUITE(TestSuiteAddress)
    std::string oldCity = "Wadowice";
    std::string oldStreet = "Kościelna";
    std::string oldNumber = "7";
    std::string newCity = "Watykan";
    std::string newStreet = "Via delle Fondamenta";
    std::string newNumber = "15";

    Address address1 = {oldCity, oldStreet, oldNumber};


    BOOST_AUTO_TEST_CASE(ShouldChangeCity) {
        address1.setCity(newCity);
        BOOST_TEST_CHECK(address1.getCity() == newCity);
    }

    BOOST_AUTO_TEST_CASE(ShouldChangeStreet) {
        address1.setStreet(newStreet);
        BOOST_TEST_CHECK(address1.getStreet() == newStreet);
    }

    BOOST_AUTO_TEST_CASE(ShouldChangeNumber) {
        address1.setNumber(newNumber);
        BOOST_TEST_CHECK(address1.getNumber() == newNumber);
    }

BOOST_AUTO_TEST_SUITE_END()


