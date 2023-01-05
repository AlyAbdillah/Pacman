#include "PlayingState.h"

void PlayingState::render(sf::RenderWindow* window)
{
    sf::CircleShape circle(200);
    circle.setFillColor(sf::Color::Blue);
    window->draw(circle);
}
