#pragma once

#include <SFML/Graphics.hpp>
using namespace std;

class Wilderness {
public:
    Wilderness(sf::RenderWindow& window);
    //Wilderness();
    void handleInput();
    void update();
    void render();
private:
    sf::RenderWindow& window;
};