#include "GameState.h"
#include "Player.h"
class ConcreteStateGame : public GameState{
public:
    explicit ConcreteStateGame(Game* game);
    void draw() override ;
    void update() override;
    void handleInput() override;
    void Init() override;

private:
    sf::Clock controlMovePlayer;
    sf::Clock idleClock;
    void backToMenu(); //switch state to Game
    Player mainCharacter;
};