#include "pigeon.hpp"
// pigeon implementation will go here.

void Pigeon::draw(){
    SDL_RenderCopy(Drawing::gRenderer, Drawing::assets, &srcRect, &moverRect);
    fly();
}

void Pigeon::fly(){
    // you have to do flying animations here
    moverRect.x += 5;
    if(moverRect.x > 1000) moverRect.x = 0;
    switch(state){
        case 0: srcRect = {0, 237, 153, 84}; state = 1; break;
        case 1: srcRect = {2, 361, 159, 124} ; state = 2; break;
        case 2: srcRect = {7, 88, 155, 103}; state = 0; break;
    }
}

Pigeon::Pigeon(){
    // src coorinates from assets.png file, they have been found using spritecow.com
    srcRect = {7,88,155,103};

    // it will display pigeon on x = 30, y = 40 location, the size of pigeon is 50 width, 60 height
    moverRect = {30, 40, 50, 50};
}

Pigeon::Pigeon(int x, int y){
    // src coorinates from assets.png file, they have been found using spritecow.com
    srcRect = {7,88,155,103};

    // it will display pigeon on x, y location, the size of pigeon is 50 width, 50 height
    moverRect = {x, y, 50, 50};
}

