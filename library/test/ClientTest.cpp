//
// Created by Piotr Rutkowski on 18/04/2022.
//

#include <boost/test/unit_test.hpp>
#include <model/Client.h>

struct TestSuiteClientFixture {
    Client *klient;
    const std::string testFirstName = "Jon";
    const std::string testLastName = "Arbuckle";
    const std::string testPersonalID = "0123456789";
    const std::string oldFirstName = "Maciek";
    const std::string oldLastName = "Macikowski";
    const std::string newFirstName = "Paweł";
    const std::string newLastName = "Pawłowski";
    Address *testaddress1;
    Address *testaddress2;
    
    
    
    TestSuiteClientFixture() {
        testaddress1 = new Address("London", "Accacia Avenue", "22");
        testaddress2 = new Address("London", "Rue Morgue", "13");
        klient = new Client(oldFirstName,oldLastName,testPersonalID,testaddress1);
    }

    ~TestSuiteClientFixture() {
        delete testaddress1;
        delete testaddress2;
        delete klient;
    }
};


BOOST_FIXTURE_TEST_SUITE(TestSuiteClient, TestSuiteClientFixture)


    BOOST_AUTO_TEST_CASE(ParameterConstrutorTest) {

        Client c(testFirstName, testLastName, testPersonalID, testaddress1);
        BOOST_TEST(testFirstName == c.getFirstName());
        BOOST_TEST(testLastName == c.getLastName());
        BOOST_TEST(testPersonalID == c.getPersonalId());
        BOOST_TEST(testaddress1 == c.getAddress());
    }

    BOOST_AUTO_TEST_CASE(ShouldntChangeFirstName) {
        klient->setFirstName("");
        BOOST_TEST_CHECK(klient->getFirstName() == oldFirstName);
    }

    BOOST_AUTO_TEST_CASE(ShouldChangeFirstName) {
        klient->setFirstName(newFirstName);
        BOOST_TEST_CHECK(klient->getFirstName() == newFirstName);
    }

    BOOST_AUTO_TEST_CASE(ShouldntChangeLastName) {
        klient->setLastName("");
        BOOST_TEST_CHECK(klient->getLastName() == oldLastName);
    }

    BOOST_AUTO_TEST_CASE(ShouldChangeLastNameName) {
        klient->setLastName(newLastName);
        BOOST_TEST_CHECK(klient->getLastName() == newLastName);
    }

    BOOST_AUTO_TEST_CASE(ShouldChangeaddress) {
        klient->setAddress(testaddress2);
        BOOST_TEST_CHECK(klient->getAddress() == testaddress2);
    }

    BOOST_AUTO_TEST_CASE(ShouldntChangeaddress) {
        klient->setAddress(nullptr);
        BOOST_TEST_CHECK(klient->getAddress() == testaddress1);
    }

BOOST_AUTO_TEST_SUITE_END()
#define BOOST_TEST_MODULE example

