//
// Created by CCEClass1 on 12/12/2018.
//

#ifndef BOWLINGKATA_GAME_H
#define BOWLINGKATA_GAME_H
#include <array>

class Game {
    int currentRoll =0;
    std::array<int, 21> rolls;

public:
    void Roll(int i);
    int ScoreGame();
    bool IsSpare(int frameIndex) const;
};


#endif //BOWLINGKATA_GAME_H
