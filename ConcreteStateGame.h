#include "GameState.h"
#include "Player.h"
#include "TileMap.h"
class ConcreteStateGame : public GameState{
public:
    explicit ConcreteStateGame(Game* game);
    void draw() override ;
    void update() override;
    void handleInput() override;
    void Init() override;

private:
    TileMap actualLevel{};
    sf::Clock controlMovePlayer;
    sf::Clock idleClock;
    void backToMenu(); //switch state to Game
    Player mainCharacter;
};