#include "Player.h"
#include "config.cpp"
#include "SFML/Graphics.hpp"
Player::Player() {
    entityTexture.loadFromFile(IMG_ROOT"/Player/Robot/mov/Idle (1).png");
    entitySprite.setTexture(entityTexture);
    moveSpeed=5;
}

void Player::movePlayer(char direction) {
    float x=0;

    if (direction == 'l') {
        x=-moveSpeed;
    } else if (direction == 'r') {
        x=moveSpeed;
    }

    entitySprite.move(x,0);
}

void Player::draw(sf::RenderWindow &window) {
    window.draw(entitySprite);
}



