//
// Created by Piotr Rutkowski on 25/04/2022.
//
#include <boost/test/unit_test.hpp>
#include <model/Vehicle.h>

BOOST_AUTO_TEST_SUITE(TestSuiteAddress)
    std::string oldPlateNumber = "1234567";
    unsigned int oldBasePrice = 45;
    std::string newPlateNumber = "7654321";
    unsigned int newBasePrice = 1488;
    bool newRented = true;

    Vehicle vehicle = {oldPlateNumber, oldBasePrice};

    BOOST_AUTO_TEST_CASE(ShouldChangePlateNumber) {
        vehicle.setPlateNumber(newPlateNumber);
        BOOST_TEST_CHECK(vehicle.getPlateNumber() == newPlateNumber);
    }

    BOOST_AUTO_TEST_CASE(ShouldChangeNewBasePrice) {
        vehicle.setBasePrice(newBasePrice);
        BOOST_TEST_CHECK(vehicle.getBasePrice() == newBasePrice);
    }

    BOOST_AUTO_TEST_CASE(ShouldChangeRentStatus) {
        vehicle.setRented(newRented);
        BOOST_TEST_CHECK(vehicle.isRented() == newRented);
    }

BOOST_AUTO_TEST_SUITE_END()


