#include "Tile.h"
#include "config.cpp"

Tile::Tile(int id,int i, int j, const std::string &ty) {
    idTile=id;
    this->i=i;
    this->j=j;
    factor=0.f;
    type=ty;
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

    collision.setPosition(spriteShow.getPosition());
    collision.setSize(sf::Vector2f(dim,dim));
}

void Tile::drawTile(sf::RenderWindow &window) {
    window.draw(spriteShow);
}