#include "Player.h"
#include "config.cpp"
#include "SFML/Graphics.hpp"
#include <iostream>
Player::Player() {
    IdleTexture.loadFromFile(IMG_ROOT"/Player/Robot/mov/Idle (1).png");
    RunTexture.loadFromFile(IMG_ROOT"/Player/Robot/mov/Run (1).png");
    entitySprite.setTexture(IdleTexture);
    moveSpeed=8;
    actualDirection=RightP;
    cRun=1;
    cIdle=1;
    currentXYPlayer=entitySprite.getPosition();
    idle=true;
}

void Player::movePlayer(char direction) {
    float x=0;

    if(cRun!=maxCrun && moveClock.getElapsedTime().asMilliseconds()>=40.f){
        cRun++;
        moveClock.restart();
    }
    if(cRun==maxCrun)
        cRun=1;

    RunTexture.loadFromFile(IMG_ROOT"/Player/Robot/mov/Run ("+std::to_string(cRun)+").png");

    if (direction == 'l') {
        actualDirection=leftP;
        x=-moveSpeed;
        if(entitySprite.getScale()!=sf::Vector2f(-1.f,1.f)){
            entitySprite.setScale(-1.f,1.f);
            entitySprite.setPosition(entitySprite.getPosition().x +128,entitySprite.getPosition().y);
        }
    } else if (direction == 'r') {
        actualDirection=RightP;
        x=moveSpeed;
        if(entitySprite.getScale()!=sf::Vector2f(1.f,1.f)){
            entitySprite.setScale(1.f,1.f);
            entitySprite.setPosition(entitySprite.getPosition().x -128,entitySprite.getPosition().y);
        }
    }
    entitySprite.setTexture(RunTexture);
    entitySprite.move(x,0);
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



