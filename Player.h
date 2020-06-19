#include "SFML/Graphics.hpp"
class Tile;
class Player {
public:
    Player();
    void movePlayer(char direction,std::vector<Tile> &tileTerrain);
    void draw(sf::RenderWindow &window);
    void idleAnimation();
    void updateMovement(std::vector<Tile> &tileTerrain);

    sf::Vector2f currentXYPlayer;
    sf::Sprite entitySprite;
    sf::RectangleShape collisionRectangle;
    sf::RectangleShape controlMove;
    sf::View camera;

    bool idle;
    float velocityY = 0;
    float xJump;
private:
    bool controlMoveTile(std::vector<Tile> &tileTerrain);
    sf::Clock moveClock;
    float moveSpeed;
    sf::Texture IdleTexture;
    sf::Texture RunTexture;
    int cRun;
    int cIdle;

    float y = 0;
    float accelerationY = 0;
    float gravity = 2;

};
