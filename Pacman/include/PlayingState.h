#ifndef PLAYINGSTATE_H
#define PLAYINGSTATE_H
#include"GameST.h"

class PlayingState: public GameST
{
    public:
        void init();
        void loop();
        void render(sf::RenderWindow* window);
        void KeyPressed(int code);
        void KeyReleased(int code);
};

#endif
