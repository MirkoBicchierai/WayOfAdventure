#ifndef SFMLGAME_GAMESTATE_H
#define SFMLGAME_GAMESTATE_H

#include "Game.h"
//interface
class GameState{
public:
    GameState()= default;
    Game* game{};

    //all virtual method that override in the concrete state of game
    virtual void draw() = 0;
    virtual void update() = 0;
    virtual void handleInput() = 0;
    virtual void Init() = 0;
};

#endif
