#pragma once

#include <SFML/Graphics.hpp>
using namespace std;

class Map : public sf::Drawable, public sf::Transformable {

public:
    Map();
    bool load(const std::string& tileset, sf::Vector2u tileSize, const int* tiles, unsigned int width, unsigned int height);
    virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
private:
    sf::VertexArray m_vertices;
    sf::Texture m_tileset;
};