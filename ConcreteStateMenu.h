#include "GameState.h"
#include "Menu.h"

class ConcreteStateMenu : public GameState{

public:
    explicit ConcreteStateMenu(Game* game);
    void draw() override;
    void update() override;
    void handleInput() override;
    void Init() override;

private:
    Menu menu;
    void startGame(); //switch state to Game
};
