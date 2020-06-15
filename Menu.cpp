#include "Menu.h"
#include "config.cpp"
Menu::Menu() {

    font.loadFromFile(FONT_ROOT"/Handwritingg.ttf");
    text.setFont(font);
    text.setString(TITLE);
    text.setPosition(WIDTH/2 -104,HIGHT/5);

    fontMenu.loadFromFile(FONT_ROOT"/neuropol.ttf");
    textExit.setFont(fontMenu);
    textPlay.setFont(fontMenu);
    textExit.setString("Exit");
    textPlay.setString("Play");
    textExit.setPosition(WIDTH/2 - 48,425 +40);
    textPlay.setPosition(WIDTH/2 - 50,275 +40);

    spriteTexture.loadFromFile(IMG_ROOT"/GUI/Idle (1).png");
    sprite2.setTexture(spriteTexture);
    sprite1.setTexture(spriteTexture);
    sprite2.setScale(-1.f,1.f);
    sprite1.setPosition(317,HIGHT/5 - 64);
    sprite2.setPosition(742,HIGHT/5 - 64);

    textureBackground.loadFromFile(IMG_ROOT"/GUI/Menu.png");
    background.setTexture(textureBackground);

    textureBackgroundColor.loadFromFile(IMG_ROOT"/GUI/test.jpg");
    backgroundColor.setTexture(textureBackgroundColor);

    playTexture.loadFromFile(IMG_ROOT"/GUI/Button1.png");
    exitTexture.loadFromFile(IMG_ROOT"/GUI/Button1.png");
    playSprite.setTexture(playTexture);
    exitSprite.setTexture(exitTexture);
    playSprite.setPosition(WIDTH/2 - 128,275);
    exitSprite.setPosition(WIDTH/2 - 128,425);

    spriteTextureLeft.loadFromFile(IMG_ROOT"/GUI/Glide_000.png");
    spriteTextureRight.loadFromFile(IMG_ROOT"/GUI/Jump (5).png");
    spriteLeft.setTexture(spriteTextureLeft);
    spriteRight.setTexture(spriteTextureRight);
    spriteRight.setScale(-1.f,1.f);

    spriteRight.setPosition(WIDTH/2 + 256 + 64 ,HIGHT/2 - 96);
    spriteLeft.setPosition(WIDTH/4 - 64 ,HIGHT/2 - 96);
}

void Menu::draw(sf::RenderWindow &window){
    window.draw(backgroundColor);
    window.draw(background);
    window.draw(sprite1);
    window.draw(sprite2);
    window.draw(text);
    window.draw(playSprite);
    window.draw(exitSprite);
    window.draw(textExit);
    window.draw(textPlay);
    window.draw(spriteLeft);
    window.draw(spriteRight);
}
