#include <SFML/Graphics.hpp>

class Menu {

public:

    Menu();
    void draw(sf::RenderWindow &window);
    sf::Sprite playSprite;
    sf::Sprite exitSprite;

private:

    sf::Font font;
    sf::Text text;

    sf::Font fontMenu;
    sf::Text textPlay;
    sf::Text textExit;

    sf::Texture spriteTexture;
    sf::Sprite sprite1;
    sf::Sprite sprite2;

    sf::Texture spriteTextureLeft;
    sf::Sprite spriteLeft;
    sf::Texture spriteTextureRight;
    sf::Sprite spriteRight;

    sf::Texture playTexture;
    sf::Texture exitTexture;

    sf::Texture textureBackground;
    sf::Sprite background;
    sf::Texture textureBackgroundColor;
    sf::Sprite backgroundColor;

};

