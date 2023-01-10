#include<SDL.h>
#include "drawing.hpp"
class Pigeon{

    SDL_Rect srcRect, moverRect;
    int state = 0;

public:
    void draw();
    void fly();
    Pigeon(); 

    // you may add other overloaded constructors here... 
    Pigeon(int x, int y);
};
