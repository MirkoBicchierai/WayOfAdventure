#ifndef SFMLGAME_GAME_H
#define SFMLGAME_GAME_H

#include <vector>
#include "SFML/Graphics.hpp"
class GameState;

class Game{

public:
    Game();
    void pushState(GameState* state); //for change state
    GameState* CurrentState(); // return the current concrete state
    void gameLoop(); //general method for call all virtual method of GameState
    sf::Event event{};

    // global variable for all concrete state
    sf::RenderWindow window;
    bool init;
private:
    std::vector<GameState*> states;
};

#endif