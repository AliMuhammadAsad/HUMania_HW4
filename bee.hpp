#include<SDL.h>
#include "drawing.hpp"
class Bee{

    SDL_Rect srcRect, moverRect;
    int state = 0; bool hover_my_zindagi_azab = false; int hover_frames_zindagi_azaaaabbb = 10;

public:
    void draw();
    void fly();
    // bool del_bee();
    Bee(); 

    // you may add other overloaded constructors here... 
    Bee(int x, int y);
    bool del_bee();
    ~Bee();
};
