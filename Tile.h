
#include <SFML/Graphics.hpp>
class Tile {
public:
    int i,j; // i and j are the indices of line and column of the vector of id tile
    int idTile; // id of tile
    sf::Sprite spriteShow;
    sf::RectangleShape collision;
    Tile()= default;
    Tile(int id,int i, int j, const std::string &ty);
    void setTile(sf::Texture &txt, sf::Vector2u tileSize); //set the texture and the draw position of the tile
    void drawTile(sf::RenderWindow &window);
    std::string type;
private:
    float factor;
    sf::IntRect sourceRect;
};