#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "romanos.hpp"

TEST_CASE("Numeros romanos - algarismos únicos", "[romanos]") {
    REQUIRE(romano_para_decimal("I") == 1);
    REQUIRE(romano_para_decimal("V") == 5);
    REQUIRE(romano_para_decimal("X") == 10);
    REQUIRE(romano_para_decimal("L") == 50);
    REQUIRE(romano_para_decimal("C") == 100);
    REQUIRE(romano_para_decimal("D") == 500);
    REQUIRE(romano_para_decimal("M") == 1000);
}

TEST_CASE("Romano seguido por um romano menor", "[romanos]") {
    REQUIRE(romano_para_decimal("III") == 3);
    REQUIRE(romano_para_decimal("DLXXVIII") == 578);
    REQUIRE(romano_para_decimal("XI") == 11);
    REQUIRE(romano_para_decimal("XXIII") == 23);
    REQUIRE(romano_para_decimal("CCCVII") == 307);
    REQUIRE(romano_para_decimal("MMCCXXVI") == 2226);
}