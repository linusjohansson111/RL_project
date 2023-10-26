#include "Game.hpp"
#include "Wilderness/Wilderness.hpp"

#include <iostream>
#include <random>



Game::Game(sf::RenderWindow& window) : window(window), wilderness(window), mode(0) {
    // Wilderness wilderness(window);
    // int mode = 0;
}

void Game::handleCloseInput() {
    sf::Event event;
    while (window.pollEvent(event)) {
        if (event.type == sf::Event::Closed) {
            window.close();
        }
    }
}

void Game::run() {
    switch(mode) {
    case 0:
        wilderness.handleInput();
        wilderness.update();
        wilderness.render();
        break;
    case 1:
        // code block
        break;
    case 2:
        // code block
        break;
    }
}

// void Game::update() {

// }

// void Wilderness::render() {
//     window.clear();
//     window.setFramerateLimit(60);
//     // rita allt annat
//     // draw

//     sf::RectangleShape test(sf::Vector2f(10, 10));
//     window.draw(test);

//     window.display();
// }