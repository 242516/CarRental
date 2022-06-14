//
// Created by Piotr Rutkowski on 18/04/2022.
//
//
#include <boost/test/unit_test.hpp>
#include <model/Client.h>

struct TestSuiteClientFixture {
    Client *klient;
    const std::string testFirstName = "Jon";
    const std::string testLastName = "Arbuckle";
    const std::string testPhoneNumber = "0123456789";
    const std::string oldFirstName = "Maciek";
    const std::string oldLastName = "Macikowski";
    const std::string newFirstName = "Paweł";
    const std::string newLastName = "Pawłowski";
    const std::string newPhoneNumber = "12456787654";
    const int testId = 45;
    const std::string oldPhoneNumber = "21345678432";




    TestSuiteClientFixture() {
        klient = new Client(oldFirstName, oldLastName, testPhoneNumber,testId);
    }

    ~TestSuiteClientFixture() {
        delete klient;
    }
};


BOOST_FIXTURE_TEST_SUITE(TestSuiteClient, TestSuiteClientFixture)


    BOOST_AUTO_TEST_CASE(ParameterConstrutorTest) {

        Client c(testFirstName, testLastName, testPhoneNumber,testId);
        BOOST_TEST(testFirstName == c.getFirstName());
        BOOST_TEST(testLastName == c.getLastName());
        BOOST_TEST(testPhoneNumber == c.getPhoneNumber());
        BOOST_TEST(testId == c.getId());

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


BOOST_AUTO_TEST_SUITE_END()
#define BOOST_TEST_MODULE example

