#include "doctest.h"
#include <iostream>
#include "sources/MagicalContainer.hpp"
#define CATCH_CONFIG_MAIN
//#include "catch.hpp"

    TEST_CASE("test constructor"){
        CHECK_NOTHROW(MagicalContainer container);  
        //CHECK_NOTHROW(MagicalContainer::AscendingIterator)
    }


    // Create a MagicalContainer object

    TEST_CASE("MagicalContainer addElement and size") {
        MagicalContainer container;
        container.addElement(1);
        container.addElement(2);
        container.addElement(3);
        CHECK_EQ(container.size() ,3);
        CHECK_NE(container.size() ,2);
    }

    TEST_CASE("MagicalContainer removeElement and size ") {
        MagicalContainer container;
        container.addElement(1);
        container.addElement(2);
        container.addElement(3);
        container.removeElement(2);
        CHECK_EQ(container.size() ,2);
        CHECK_NE(container.size() ,3);
    }

   /*/ TEST_CASE("AscendingIterator") {
        MagicalContainer container;
        container.addElement(1);
        container.addElement(3);
        MagicalContainer::AscendingIterator ascIter = container.begin();
        MagicalContainer::AscendingIterator endIter = container.end();

        std::vector<int> elements;
        while (ascIter != endIter) {
            elements.push_back(*ascIter);
            ++ascIter;
        }

        std::vector<int> expectedElements{1, 3};
        CHECK(elements == expectedElements);
    }/*/

    // Add more test cases for PrimeIterator and SideCrossIterator

