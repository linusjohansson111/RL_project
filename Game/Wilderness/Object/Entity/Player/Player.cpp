#include "Player.hpp"

Player::Player(sf::Vector2f* position, string texture) : playerSprite() {

    playerSprite.setPosition(*position);
    playerTexture.loadFromFile(texture);
    playerSprite.setTexture(playerTexture);

}


void Player::move(int x, int y) {
    playerSprite.move(x, y);
}

sf::Sprite Player::getSprite() {
    return playerSprite;
}