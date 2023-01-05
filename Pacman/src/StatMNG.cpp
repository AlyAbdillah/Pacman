#include "StatMNG.h"

void StatMNG::addState(GameST* state)
{
    states.push(state);
    states.top()->init();
}

void StatMNG::loop()
{
    states.top()->loop();
}

void StatMNG::render(sf::RenderWindow* window)
{
    states.top()->render(window);
}

void StatMNG::KeyPressed(int code)
{
   states.top()->KeyPressed(code);
}

void StatMNG::KeyReleased(int code)
{
    states.top()->KeyReleased(code);
}
