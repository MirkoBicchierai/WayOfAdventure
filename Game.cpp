#include "SFML/Graphics.hpp"
#include "GameState.h"
#include "Game.h"
#include "config.cpp"

Game::Game(){
    init=true;
    window.create(sf::VideoMode(WIDTH, HIGHT), TITLE, sf::Style::Titlebar | sf::Style::Close);
    sf::Vector2i centerWindow((sf::VideoMode::getDesktopMode().width / 2) - window.getSize().x / 2,(sf::VideoMode::getDesktopMode().height / 2) - window.getSize().y / 2 -16);
    window.setPosition(centerWindow);
    sf::Image icon;
    icon.loadFromFile(IMG_ROOT"/GUI/Sword.png");
    window.setIcon(32,32,icon.getPixelsPtr());
    window.setFramerateLimit(60);
}
void Game::pushState(GameState* state){
    states.push_back(state);
}

GameState* Game::CurrentState(){
    if (states.empty())
        return nullptr;
    else
        return states.back();
}

void Game::gameLoop(){

    while (window.isOpen()){

        if(!init)
           CurrentState()->Init();
        if (CurrentState() == nullptr)
            break;

        CurrentState()->handleInput();
        CurrentState()->update();
        window.clear();
        CurrentState()->draw();
        window.display();
    }

}


