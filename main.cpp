#include <SFML/Graphics.hpp>
#include "Game/Game.hpp"

int main() {
    sf::RenderWindow window(sf::VideoMode(512, 256), "RL game");
    Game game(window);
    
    while (window.isOpen()) {
        game.handleCloseInput();
        game.run();
        // game.update();
        // game.render();
    }
    
    return 0;
}