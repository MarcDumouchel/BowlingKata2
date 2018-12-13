#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "Game.h"

TEST_CASE("Does the Game exist", "[score]")
{
    //Arrange
    Game *g = new Game;
    //Act
    //Assert
    REQUIRE(g  != NULL);
}

TEST_CASE("Gutter game returns 0", "[score]")
{
    //Arrange
    Game g;
    int pins =0;
    //Act
    for(int frame = 0; frame < 20; frame++)
    {
        g.Roll(pins);
    }
    //Assert
    REQUIRE(0 == g.ScoreGame());
}

TEST_CASE("Single pin game returns 20", "[score]")
{
    //Arrange
    Game g;
    int pins =1;
    //Act
    for(int frame = 0; frame < 20; frame++)
    {
        g.Roll(pins);
    }
    //Assert
    REQUIRE(20 == g.ScoreGame());
}

TEST_CASE("Single spare game returns 16", "[score]")
{
    //Arrange
    Game g;
    int pins =0;
    //Act
    g.Roll(5);
    g.Roll(5);
    g.Roll(3);
    for(int frame = 3; frame < 20; frame++)
    {
        g.Roll(pins);
    }
    //Assert
    REQUIRE(16 == g.ScoreGame());
}