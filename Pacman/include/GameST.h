#ifndef GAMEST_H
#define GAMEST_H
#include <SFML/Graphics.hpp>

class GameST
{
    public:
        virtual void init() {}
        virtual void loop() = 0;
        virtual void render(sf::RenderWindow window) = 0;
        virtual void KeyPressed(int code) = 0;
        virtual void KeyReleased(int code) = 0;
};

#endif
