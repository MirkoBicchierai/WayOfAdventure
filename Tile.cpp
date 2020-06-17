#include "Tile.h"
#include <iostream>
#include "config.cpp"
Tile::Tile(int id,int i, int j) {
    idTile=id;
    this->i=i;
    this->j=j;
    factor=0.f;
}

void Tile::setTile(sf::Texture &txt, sf::Vector2u tileSize) {
    factor=(txt.getSize().x / tileSize.x);
    int tu = idTile % (int)factor;
    int tv = idTile / (int)factor;
    spriteShow.setPosition(i*tileSize.x, j*tileSize.y);
    sourceRect.top=tv * tileSize.y;
    sourceRect.left=tu * tileSize.x;

    sourceRect.width=tileSize.x;
    sourceRect.height=tileSize.y;
    spriteShow.setTextureRect(sourceRect);
    spriteShow.setTexture(txt);

    collisionRect.top=tv * tileSize.y;
    collisionRect.left=tu * tileSize.x;

    collisionRect.width = tileSize.x +1;
    collisionRect.height = tileSize.y +1;
    spriteCollision.setPosition(i*tileSize.x, j*tileSize.y);
    spriteCollision.setTextureRect(collisionRect);
    spriteCollision.setTexture(txt);
}

void Tile::drawTile(sf::RenderWindow &window) {
    window.draw(spriteShow);
}
