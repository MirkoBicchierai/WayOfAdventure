#include "Player.h"
#include "config.cpp"
#include "SFML/Graphics.hpp"
#include <iostream>
#include "Tile.h"
Player::Player() {
    IdleTexture.loadFromFile(IMG_ROOT"/Player/Robot/mov/Idle (1).png");
    RunTexture.loadFromFile(IMG_ROOT"/Player/Robot/mov/Run (1).png");
    entitySprite.setTexture(IdleTexture);
    collisionRectangle.setPosition(entitySprite.getPosition().x+20,entitySprite.getPosition().y+22);
    collisionRectangle.setSize(sf::Vector2f(80,97));
    controlMove.setPosition(entitySprite.getPosition().x+18,entitySprite.getPosition().y+21);
    controlMove.setSize(sf::Vector2f(84,90));
    moveSpeed=6;
    cRun=1;
    cIdle=1;
    currentXYPlayer=entitySprite.getPosition();
    idle=true;
    camera.setCenter(entitySprite.getPosition().x+dim/2,entitySprite.getPosition().y+dim/2);
    camera.setSize(WIDTH, HIGHT);
}

void Player::movePlayer(char direction,std::vector<Tile> &tileTerrain) {
    float x=0;

    if(cRun!=maxCrun && moveClock.getElapsedTime().asMilliseconds()>=40.f){
        cRun++;
        moveClock.restart();
    }
    if(cRun==maxCrun)
        cRun=1;

    RunTexture.loadFromFile(IMG_ROOT"/Player/Robot/mov/Run ("+std::to_string(cRun)+").png");

    if (direction == 'l') {
        x=-moveSpeed;
        if(entitySprite.getScale()!=sf::Vector2f(-1.f,1.f)){
            entitySprite.setScale(-1.f,1.f);
            entitySprite.setPosition(entitySprite.getPosition().x +128,entitySprite.getPosition().y);
        }
    } else if (direction == 'r') {
        x=moveSpeed;
        if(entitySprite.getScale()!=sf::Vector2f(1.f,1.f)){
            entitySprite.setScale(1.f,1.f);
            entitySprite.setPosition(entitySprite.getPosition().x -128,entitySprite.getPosition().y);
        }
    }

    controlMove.move(x,0);
    bool check=true;
    for(auto& i:tileTerrain){
        if (controlMove.getGlobalBounds().intersects(i.collision.getGlobalBounds()))
            check = false;
    }

    if(check) {
        entitySprite.setTexture(RunTexture);
        entitySprite.move(x, 0);
        collisionRectangle.move(x, 0);
        controlMove.move(x, 0);
        camera.move(x, 0);
    }
    controlMove.move(-x,0);

}

void Player::draw(sf::RenderWindow &window) {
    window.draw(entitySprite);
}

void Player::idleAnimation() {
    if(cIdle!=maxcIdle)
        cIdle++;
    else
        cIdle=1;
    IdleTexture.loadFromFile(IMG_ROOT"/Player/Robot/mov/Idle ("+std::to_string(cIdle)+").png");
    entitySprite.setTexture(IdleTexture);
}

void Player::gravity() {
    entitySprite.move(0,5);
    camera.move(0,5);
    collisionRectangle.move(0,5);
    controlMove.move(0,5);
}



