#pragma once

#include <SFML/Graphics.hpp>
#include "Wilderness/Wilderness.hpp"

class Game {
public:
    Game(sf::RenderWindow& window);
    
    void run();
    void handleCloseInput();

private:
    sf::RenderWindow& window;
    Wilderness wilderness; //(sf::RenderWindow&)
    int mode;
};