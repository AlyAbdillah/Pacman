#ifndef ENGINE_H
#define ENGINE_H

#include "SFML/Graphics.hpp"
#include "StatMNG.h"
class Engine
{
    public:
        static void init();
        static bool isRunning();
        static void handleEvents();
        static void render();

    private:
        static sf::RenderWindow window;
        static StatMNG Gstates;
};

#endif
