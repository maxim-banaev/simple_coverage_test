#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "myFunctions.h"

TEST_CASE("check functionWithoutBranch", "[functionWithoutBranch]") {
    CHECK(functionWithoutBranch(0) == 1);
    CHECK(functionWithoutBranch(1) == 2);
}

TEST_CASE("check functionWithSingleIfBranch", "[functionWithSingleIfBranch]") {
    CHECK(functionWithSingleIfBranch(0) == 0);
    //CHECK(functionWithSingleIfBranch(1) == 2);
}