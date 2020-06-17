
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
    void load(const std::string& tileSet,const std::string &path,sf::Vector2u dim);
private:
    void loadWater(sf::Vector2u tileSize,const std::string &path);
    void loadTerrain(sf::Vector2u tileSize,const std::string &path);
    void loadObj(sf::Vector2u tileSize,const std::string &path);
};