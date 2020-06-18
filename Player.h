#include "SFML/Graphics.hpp"
class Tile;
class Player {
public:
    Player();
    void movePlayer(char direction,std::vector<Tile> &tileTerrain);
    void draw(sf::RenderWindow &window);
    void idleAnimation();
    sf::Vector2f currentXYPlayer;
    sf::Sprite entitySprite;
    sf::RectangleShape collisionRectangle;
    sf::RectangleShape controlMove;
    bool idle;
    sf::View camera;
    void gravity();
private:
    sf::Clock moveClock;
    float moveSpeed;
    sf::Texture IdleTexture;
    sf::Texture RunTexture;
    int cRun;
    int cIdle;
};
