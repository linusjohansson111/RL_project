#pragma once

#include <SFML/Graphics.hpp>
#include <string>
using namespace std;

class Player {
    
public:
    Player(sf::Vector2f*, string);
    void move(int,int);
    sf::Sprite getSprite();
private:
    sf::Texture playerTexture;
    sf::Sprite playerSprite; //position, texture, move funktion, drawable
    
    

};

