#include<SDL.h>
#include "drawing.hpp"
class Butterfly{

    SDL_Rect srcRect, moverRect;
    int state = 0;  bool anime_up = false;

public:
    void draw();
    void fly();
    Butterfly(); 

    // you may add other overloaded constructors here... 
    Butterfly(int x, int y);
};
