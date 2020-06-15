#include "config.cpp"
#include "SFML/Graphics.hpp"
#include "ConcreteStateGame.h"
#include "ConcreteStateMenu.h"
#include <iostream>

ConcreteStateGame::ConcreteStateGame(Game* game){
    this->game = game;
}
void ConcreteStateGame::handleInput(){
    sf::Event event{};
    while (game->window.pollEvent(event)) {
        if (event.type == sf::Event::Closed)
            game->window.close();

        if(event.type == sf::Event::KeyPressed){
            if(event.key.code == sf::Keyboard::Escape){
                backToMenu();
            }
            if(event.key.code == sf::Keyboard::Left){
                mainCharacter.movePlayer('l');
            }else if(event.key.code == sf::Keyboard::Right){
                mainCharacter.movePlayer('r');
            }
        }

    }
}

void ConcreteStateGame::update(){

}

void ConcreteStateGame::draw(){
    mainCharacter.draw(game->window);
}

void ConcreteStateGame::backToMenu(){
    game->init=true;
    game->pushState(new ConcreteStateMenu(game));
}

void ConcreteStateGame::Init() {
    game->init=false;
}
