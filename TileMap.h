#include <SFML/Graphics.hpp>
#include <vector>
#include "Tile.h"
class TileMap {
public:
    sf::Texture texture;
    int width;
    int height;
    std::vector<Tile> tileTerrain;
    std::vector<Tile> tileWater;
    std::vector<Tile> tileObj;
    void load(const std::string& tileSet, sf::Vector2u tileSize, sf::RenderWindow &window,const std::string &path);

};