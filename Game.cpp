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
//    if(currentRoll == 0 && i == 10)
//    {
//        currentRoll +=2;
//    }
//    else {
        currentRoll++;
//    }
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
        if(rolls[rollNum] == 10)//strike
        {
//            aggregateScore += 10 + rolls[rollNum +2] + rolls[rollNum +3];
            aggregateScore += rolls[rollNum] + rolls[rollNum +1] + rolls[rollNum +2];
            rollNum+= 1;
        }
        else if(IsSpare(rollNum))//spare
        {
            aggregateScore += 10 + rolls[rollNum + 2];
            rollNum += 2;
        } else
            {
            aggregateScore += rolls[rollNum] + rolls[rollNum+1];
                rollNum += 2;
        }
        //Scoring per game
//        rollNum+=2;
    }

    return aggregateScore;
}

Game::Game() {
    currentRoll =0;
    rolls.fill(0);
}

bool Game::IsSpare(int frameIndex) const {
    return rolls[frameIndex] + rolls[frameIndex + 1] == 10;
}
