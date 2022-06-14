//
// Created by Piotr Rutkowski on 26/04/2022.
//
#include <boost/test/unit_test.hpp>
#include <model/ParcelLocker.h>


BOOST_AUTO_TEST_CASE(ParameterConstrutorTestDefaultBeginTime) {

    Parcel *parcel = new Parcel();


    boost::posix_time::ptime now = boost::posix_time::second_clock::local_time(); //hope this takes no longer than 59 secs...
    BOOST_TEST_REQUIRE(
            !r->getRentedAt().is_not_a_date_time()); //if this isn't met, the next check doesn't make sense...
    boost::posix_time::time_period skew = boost::posix_time::time_period(r->getRentedAt(), now);
    BOOST_TEST((skew.length().hours() == 0 && skew.length().minutes() == 0));

    delete r;
}