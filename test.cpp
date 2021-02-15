#define CATCH_CONFIG_MAIN
#include "catch/catch.hpp"

#include "myFunctions.h"

TEST_CASE("check functionWithoutBranch", "[functionWithoutBranch]") {
    CHECK(functionWithoutBranch(0) == 1);
}

TEST_CASE("check functionWithIfBranch", "[functionWithIfBranch]") {
    CHECK(functionWithIfBranch(1) == 2);
}

TEST_CASE("check functionWithIfElseBranch", "[functionWithIfElseBranch]") {
    CHECK(functionWithIfElseBranch(1) == 2);
}

TEST_CASE("check functionWithDoubleIfBranch", "[functionWithDoubleIfBranch]") {
    CHECK(functionWithDoubleIfBranch(1) == 2);
}

TEST_CASE("check functionWithCaseBranch", "[functionWithCaseBranch]") {
    CHECK(functionWithCaseBranch(1) == 10);
}