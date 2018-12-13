//
// Created by CCEClass1 on 12/12/2018.
//

#ifndef BOWLINGKATA_GAME_H
#define BOWLINGKATA_GAME_H


class Game {
    int aggregateScore=0;
    int rollNumber =1;

public:
    void Roll(int i);

    int ScoreGame();
};


#endif //BOWLINGKATA_GAME_H
