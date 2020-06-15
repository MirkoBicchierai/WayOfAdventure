#include "config.cpp"
#include "SFML/Graphics.hpp"
class Player {
public:
    Player();
    void movePlayer(char direction);
    void draw(sf::RenderWindow &window);
private:
    int moveSpeed;
    sf::Texture entityTexture;
    sf::Sprite entitySprite;
};
