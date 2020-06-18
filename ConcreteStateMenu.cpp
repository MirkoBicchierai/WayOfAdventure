#include "SFML/Graphics.hpp"
#include "ConcreteStateMenu.h"
#include "config.cpp"
#include "ConcreteStateGame.h"
ConcreteStateMenu::ConcreteStateMenu(Game* game){
    this->game = game;
}

void ConcreteStateMenu::handleInput(){
    sf::Event event{};
    while (game->window.pollEvent(event)) {

        if (event.type == sf::Event::Closed)
            game->window.close();

        if(sf::Mouse::isButtonPressed(sf::Mouse::Left)){
            sf::Vector2f mouse = game->window.mapPixelToCoords(sf::Mouse::getPosition(game->window));
            sf::FloatRect bounds = menu.playSprite.getGlobalBounds();
            if (bounds.contains(mouse))
                startGame();
            bounds = menu.exitSprite.getGlobalBounds();
            if (bounds.contains(mouse))
                game->window.close();
        }

    }
}

void ConcreteStateMenu::update(){

}

void ConcreteStateMenu::draw(){
    menu.draw(game->window);
}

void ConcreteStateMenu::startGame(){
    game->init=true;
    game->pushState(new ConcreteStateGame(game));
}

void ConcreteStateMenu::Init() {
    game->init=false;
    game->window.setView(game->window.getDefaultView());
}
