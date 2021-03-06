cmake_minimum_required(VERSION 3.4)
project(Library)

set(SOURCE_FILES
        src/model/Client.cpp
        src/model/Address.cpp include/model/Address.h src/model/Parcel.cpp include/model/Parcel.h src/model/ParcelLocker.cpp include/model/ParcelLocker.h src/repository/ParcelRepository.cpp include/repository/ParcelRepository.h src/repository/ParcelLockerRepository.cpp include/repository/ParcelLockerRepository.h src/repository/ClientRepository.cpp include/repository/ClientRepository.h src/repository/Repository.cpp include/repository/Repository.h src/manager/ParcelLockerManager.cpp include/manager/ParcelLockerManager.h src/manager/ClientManager.cpp include/manager/ClientManager.h src/manager/ParcelManager.cpp include/manager/ParcelManager.h src/exception/DoorNotFloundExeption.cpp include/exception/DoorNotFloundExeption.h src/exception/ParcelNotFoundExeption.cpp include/exception/ParcelNotFoundExeption.h src/exception/DoorOcupiedExeption.cpp include/exception/DoorOcupiedExeption.h)
#Utwórz bibliotekę typu STATIC, SHARED albo MODULE ze wskazanych źródeł
add_library(Library ${SOURCE_FILES})

target_include_directories(Library PUBLIC include)
enable_testing() # dodane wcześniej w punkcie 2
find_package (Boost 1.60.0 COMPONENTS "unit_test_framework" REQUIRED)

include_directories(
        ${CMAKE_CURRENT_SOURCE_DIR}/include
        ${Boost_INCLUDE_DIRS}
)

set(SOURCE_TEST_FILES test/master.cpp test/ClientTest.cpp test/AddressTest.cpp test/ParcelTest.cpp test/ParcelLockerTest.cpp) # tu w przyszłości będą dodawane pliki źródłowe testów

add_executable (LibraryTest ${SOURCE_TEST_FILES})

#dołącz bibliotekę z testowanymi klasami oraz bibliotekę boost.test do programu testów
target_link_libraries (LibraryTest
        Library
        ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY}
        )

#dodaj test TestBiblioteki1. Instrukcji cmake add_test może być wiele.
#Dodatkowe parametry wpływają na szczegółowość generowanego raportu. Standardowo znajduje się on w Testing/Temporary.
add_test(LibraryTest1 LibraryTest
        --report_level=detailed
        --log_level=all
        --color_output=yes
        )
add_custom_target(check ${CMAKE_COMMAND} -E env CTEST_OUTPUT_ON_FAILURE=1 BOOST_TEST_LOG_LEVEL=all
        ${CMAKE_CTEST_COMMAND} -C $<CONFIGURATION> --verbose
        WORKING_DIRECTORY ${CMAKE_BINARY_DIR})