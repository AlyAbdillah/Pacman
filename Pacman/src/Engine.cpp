#include "Engine.h"
using namespace sf;

RenderWindow Engine::window;
StatMNG Engine::Gstates;

void Engine::init()
{
    window.create(VideoMode(640,480), "Pacman");
    Gstates.addState(new PlayingState);
}

bool Engine::isRunning()
{
    return window.isOpen();
}

void Engine::handleEvents()
{
    Event event;
    while(window.pollEvent(event))
        {
        switch(event.type)
        {
        case Event::Closed:
            window.close();
            break;

        case Event::KeyPressed:
            Gstates.KeyPressed(event.key.code);
            break;

        case Event::KeyReleased:
            Gstates.KeyReleased(event.key.code);
            break;
        }
    }
}

void Engine::render()
{
    window.clear(Color::Black);
    Gstates.render(& window);
    window.display();
}

