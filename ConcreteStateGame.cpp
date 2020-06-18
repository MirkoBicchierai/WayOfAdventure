#include "config.cpp"
#include "SFML/Graphics.hpp"
#include "ConcreteStateGame.h"
#include "ConcreteStateMenu.h"

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
                mainCharacter.movePlayer('l',actualLevel.tileTerrain);
            }else if(event.key.code == sf::Keyboard::Right){
                mainCharacter.movePlayer('r',actualLevel.tileTerrain);
            }
        }

    }
}

void ConcreteStateGame::update(){

    if(mainCharacter.idle && idleClock.getElapsedTime().asMilliseconds()>=50.f){
        mainCharacter.idleAnimation();
        idleClock.restart();
    }

    if(controlMovePlayer.getElapsedTime().asMilliseconds()>=350.f){
        if(mainCharacter.currentXYPlayer != mainCharacter.entitySprite.getPosition()){
            mainCharacter.currentXYPlayer=mainCharacter.entitySprite.getPosition();
            mainCharacter.idle=false;
        }else
            mainCharacter.idle=true;
        controlMovePlayer.restart();
    }

    controlPlayer=false;
    for(auto i:actualLevel.tileTerrain){
        if(mainCharacter.collisionRectangle.getGlobalBounds().intersects(i.collision.getGlobalBounds())){
            controlPlayer=true;
        }
    }

    if(!controlPlayer){
        mainCharacter.gravity();
    }
    game->window.setView(mainCharacter.camera);
}

void ConcreteStateGame::draw(){

    for(auto i:actualLevel.tileTerrain){
        i.drawTile(game->window);
    }
    for(auto j:actualLevel.tileObj){
        j.drawTile(game->window);
    }
    for(auto k:actualLevel.tileWater){
        k.drawTile(game->window);
    }

    mainCharacter.draw(game->window);

}

void ConcreteStateGame::backToMenu(){
    game->init=true;
    game->pushState(new ConcreteStateMenu(game));
}

void ConcreteStateGame::Init() {
    actualLevel.load(MAP_ROOT"/Basic/Tiles/TileSet.png","Level1",sf::Vector2u(100,20));
    game->init=false;
}
