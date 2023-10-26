#include "Wilderness.hpp"
// #include "Map/map.hpp"


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
                        map(new Map) {
    window.setFramerateLimit(60);

}


void Wilderness::render() {
    window.clear();
    // rita allt annat
    // draw

    sf::RectangleShape test(sf::Vector2f(10, 10));
    window.draw(test);

    window.display();
}
void Wilderness::update() {}
void Wilderness::handleInput() {}