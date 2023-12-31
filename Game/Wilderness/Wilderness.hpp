#pragma once

#include <SFML/Graphics.hpp>
#include "Map/Map.hpp"
#include "Object/Entity/Player/Player.hpp"

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
    const int level [128];
    Map map;
    Player player;
};