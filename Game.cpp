//
// Created by CCEClass1 on 12/12/2018.
//
#include "Game.h"
/**
 *
 * @param i - number of pins
 */
void Game::Roll(int i) {
aggregateScore += i;
if(rollNumber == 3 && aggregateScore == 10)
    aggregateScore += i*2;
rollNumber++;
}
/**
 *
 * @return score of the entire game
 */
int Game::ScoreGame() {
return aggregateScore;
}
