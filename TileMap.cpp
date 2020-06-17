#include <SFML/Graphics.hpp>
#include <iostream>
#include "TileMap.h"
#include "config.cpp"
#include <fstream>
#include <regex>

void TileMap::load(const std::string& tileSet,const std::string &level,sf::Vector2u dim){

    texture.loadFromFile(tileSet);
    width=dim.x;
    height=dim.y;
    sf::Vector2u tileSize(128,128);
    std::string path = MAP_ROOT"/maps/level/"+level;
    loadTerrain(tileSize,path);
    loadWater(tileSize,path);
    loadObj(tileSize,path);

}

void TileMap::loadWater(sf::Vector2u tileSize, const std::string &path) {
    std::vector <int> vec;
    std::string s;
    std::ifstream infile(path+"_Water.txt");
    int c=0;
    int r=0;
    while (std::getline(infile, s)){
        std::regex ws_re(",");
        std::vector<std::string> result{ std::sregex_token_iterator(s.begin(), s.end(), ws_re, -1), {}};
        c=0;
        for (const auto & i : result) {
            std::stringstream geek(i);
            int x = 0;
            geek >> x;
            vec.push_back(x);
            c++;
        }
        r++;
    }
    //inerimento vettore terreno
    int n=0,tileNumber=0;
    for (int i = 0; i < width; ++i) {
        for (int j = 0; j < height; ++j) {
            tileNumber = vec[i + j * width];
            if(tileNumber!=-1){
                tileWater.emplace_back(Tile(tileNumber, i, j,"Water"));
                n=tileWater.size();
                tileWater[n-1].setTile(texture, tileSize);
            }

        }
    }
}

void TileMap::loadTerrain(sf::Vector2u tileSize, const std::string &path) {
    std::vector <int> vec;
    std::string s;
    std::ifstream infile(path+"_Terrain.txt");
    int c=0;
    int r=0;
    while (std::getline(infile, s)){
        std::regex ws_re(",");
        std::vector<std::string> result{ std::sregex_token_iterator(s.begin(), s.end(), ws_re, -1), {}};
        c=0;
        for (const auto & i : result) {
            std::stringstream geek(i);
            int x = 0;
            geek >> x;
            vec.push_back(x);
            c++;
        }
        r++;
    }
    //inerimento vettore terreno
    int n=0,tileNumber=0;
    for (int i = 0; i < width; ++i) {
        for (int j = 0; j < height; ++j) {
            tileNumber = vec[i + j * width];
            if(tileNumber!=-1){
                tileTerrain.emplace_back(Tile(tileNumber, i, j,"Terrain"));
                n=tileTerrain.size();
                tileTerrain[n-1].setTile(texture, tileSize);
            }

        }
    }

}

void TileMap::loadObj(sf::Vector2u tileSize, const std::string &path) {
    std::vector <int> vec;
    std::string s;
    std::ifstream infile(path+"_Obj.txt");
    int c=0;
    int r=0;
    while (std::getline(infile, s)){
        std::regex ws_re(",");
        std::vector<std::string> result{ std::sregex_token_iterator(s.begin(), s.end(), ws_re, -1), {}};
        c=0;
        for (const auto & i : result) {
            std::stringstream geek(i);
            int x = 0;
            geek >> x;
            vec.push_back(x);
            c++;
        }
        r++;
    }
    //inerimento vettore terreno
    int n=0,tileNumber=0;
    for (int i = 0; i < width; ++i) {
        for (int j = 0; j < height; ++j) {
            tileNumber = vec[i + j * width];
            if(tileNumber!=-1){
                tileObj.emplace_back(Tile(tileNumber, i, j,"Obj"));
                n=tileObj.size();
                tileObj[n-1].setTile(texture, tileSize);
            }

        }
    }
}
