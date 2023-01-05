#ifndef STATMNG_H
#define STATMNG_H
#include <stack>
#include "GameST.h"

class StatMNG
{
    private:
        std::stack<GameST*> states;

    public:
        void addState(GameST* state);
        void loop();
        void render(sf::RenderWindow* window);
        void KeyPressed(int code);
        void KeyReleased(int code);
};

#endif
