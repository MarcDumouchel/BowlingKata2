//
// Created by CCEClass1 on 12/12/2018.
//
#include "Game.h"
/**
 *
 * @param i - number of pins
 */
void Game::Roll(int i)
{
    rolls[currentRoll] = i;
    currentRoll++;
}
/**
 *
 * @return score of the entire game
 */
int Game::ScoreGame() {
    int aggregateScore = 0;
    int rollNum =0;
    for(int frame=0; frame <10; frame++)
    {
        if(IsSpare(rollNum))//spare
        {
            aggregateScore += 10 + rolls[rollNum + 2];
        } else {
            aggregateScore += rolls[rollNum] + rolls[rollNum+1];
        }
        //Scoring per game
        rollNum+=2;
    }

    return aggregateScore;
}

bool Game::IsSpare(int frameIndex) const {
    return rolls[frameIndex] + rolls[frameIndex + 1] == 10;
}
