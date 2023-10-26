#include "Wilderness.hpp"
#include "Map/map.hpp"
#include <string>

// Wilderness::Wilderness() {
//     window = nullptr;
// }

Wilderness::Wilderness( sf::RenderWindow& window) : 
                        window(window), 
                        level {
        0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 2, 0, 0, 0, 0,
        1, 1, 0, 0, 0, 0, 0, 0, 3, 3, 3, 3, 3, 3, 3, 3,
        0, 1, 0, 0, 2, 0, 3, 3, 3, 0, 1, 1, 1, 0, 0, 0,
        0, 1, 1, 0, 3, 3, 3, 0, 0, 0, 1, 1, 1, 2, 0, 0,
        0, 0, 1, 0, 3, 0, 2, 2, 0, 0, 1, 1, 1, 1, 2, 0,
        2, 0, 1, 0, 3, 0, 2, 2, 2, 0, 1, 1, 1, 1, 1, 1,
        0, 0, 1, 0, 3, 2, 2, 2, 0, 0, 0, 0, 1, 1, 1, 1,
    },
                        map(),
                        player(new sf::Vector2f(100, 100), string("./textures/Pink_Monster.png")) {

    // map.load("Map/texture_map.png", sf::Vector2u(32, 32), level, 16, 8);

}


void Wilderness::render() {
    map.load("./textures/texture_map.png", sf::Vector2u(32, 32), level, 16, 8);
    window.setFramerateLimit(60);
    window.clear();
    // rita allt annat
    // draw

    // sf::RectangleShape test(sf::Vector2f(10, 10));
    // window.draw(test);
    window.draw(map);
    window.draw(player.getSprite());

    window.display();
}
void Wilderness::update() {}
void Wilderness::handleInput() {

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
    {
        // left key is pressed: move our character
        player.move(0.f, -1.f);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
    {
        // left key is pressed: move our character
        player.move(0.f, 1.f);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
    {
        // left key is pressed: move our character
        player.move(-1.f, 0.f);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
    {
        // left key is pressed: move our character
        player.move(1.f, 0.f);
    }
}