#include <SFML/Graphics.hpp>
#include <iostream>
#include "TileMap.h"
#include "config.cpp"

void TileMap::load(const std::string& tileSet, sf::Vector2u tileSize, sf::RenderWindow &window,const std::string &path){
    std::vector<int> tiles; //vettore d'appoggio da leggere da json
    texture.loadFromFile(tileSet);
    width=2; // leggere da json
    height=3;// leggere da json

    //inerimento vettore terreno
    int n=0,tileNumber=0;
    for (int i = 0; i < width; ++i) {
        for (int j = 0; j < height; ++j) {
            tileNumber = tiles[i + j * width];
            if(tileNumber!=0){
                tileTerrain.emplace_back(Tile(tileNumber, i, j));
                n=tileTerrain.size();
                tileTerrain[n-1].setTile(texture, tileSize);
            }

        }
    }

    //inerimento vettore water
    for (int i = 0; i < width; ++i) {
        for (int j = 0; j < height; ++j) {
            tileNumber = tiles[i + j * width];
            if(tileNumber!=0){
                tileWater.emplace_back(Tile(tileNumber, i, j));
                n=tileWater.size();
                tileWater[n-1].setTile(texture, tileSize);
            }
        }
    }

    //inerimento vettore obj
    for (int i = 0; i < width; ++i) {
        for (int j = 0; j < height; ++j) {
            tileNumber = tiles[i + j * width];
            if(tileNumber!=0){
                tileObj.emplace_back(Tile(tileNumber, i, j));
                n=tileObj.size();
                tileObj[n-1].setTile(texture, tileSize);
            }
        }
    }

}
