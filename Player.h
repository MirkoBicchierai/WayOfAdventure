#include "SFML/Graphics.hpp"
class Player {
public:
    Player();
    void movePlayer(char direction);
    void draw(sf::RenderWindow &window);
    void idleAnimation();
    sf::Vector2f currentXYPlayer;
    sf::Sprite entitySprite;
    bool idle;
private:
    sf::Clock moveClock;
    int actualDirection;
    float moveSpeed;
    sf::Texture IdleTexture;
    sf::Texture RunTexture;
    int cRun;
    int cIdle;
};
