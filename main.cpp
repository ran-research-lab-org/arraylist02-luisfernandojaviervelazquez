#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "ArrayList.h"



TEST_CASE( "ArrayList", "[ArrayList]" ) {
    ArrayList L;
    REQUIRE(L.getSize() == 0);

    L.append(6);
    L.append(9);
    REQUIRE(L.getSize() == 2);
    REQUIRE(L.at(0) == 6);
    REQUIRE(L.at(1) == 9);

    L.insertAt(42, 2);
    REQUIRE(L.getSize() == 3);
    REQUIRE(L.at(0) == 6);
    REQUIRE(L.at(2) == 42);

    L.insertAt(88, 0);
    REQUIRE(L.getSize() == 4);
    REQUIRE(L.at(0) == 88);
    REQUIRE(L.at(2) == 9);

    L.prepend(90);
    REQUIRE(L.getSize() == 5);
    REQUIRE(L.at(0) == 90);
    REQUIRE(L.at(1) == 88);
    REQUIRE(L.at(1) == 88);

    ArrayList M;
    M.append(10);
    M.append(20);
    M.append(30);
    M.append(40);
    M.remove(1);
    REQUIRE(M.getSize()==3);
    REQUIRE(M.at(1) == 30);

    ArrayList P;
    P = M;
    P.prepend(5);
    REQUIRE(P.at(0) == 5);
    REQUIRE(M.at(0) == 10);

    P = P;
    REQUIRE(P.at(0) == 5);


}