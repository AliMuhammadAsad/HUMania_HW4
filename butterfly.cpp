#include "butterfly.hpp"
#include "drawing.hpp"

void Butterfly::draw(){
    SDL_RenderCopy(Drawing::gRenderer, Drawing::assets, &srcRect, &moverRect);
    fly();
}

void Butterfly::fly(){
    // you have to do flying animations here
    // moverRect.x += 5;
    moverRect.x += 3; //moverRect.y += 5;
    if(moverRect.x > 1000) moverRect.x = 0;
    // if(moverRect.y > 600) moverRect.y = 0;
    // if(moverRect.y >= 600){
    //     moverRect.x += 5; moverRect.y -= 5;
    // }
    // else if(moverRect.y <= 0){
    //     moverRect.x += 5; moverRect.y += 5;
    // }
    if(anime_up == false){
        if(moverRect.y <= 560) moverRect.y += 3;
        else if(moverRect.y > 560){moverRect.y -= 3; anime_up = true;}
    }
    else if(anime_up == true){
        if(moverRect.y >= 0) moverRect.y -= 3;
        else if(moverRect. y < 0){moverRect.y += 3; anime_up = false;}
    }

    switch(state){
        case 0: srcRect = {257, 182, 192, 214}; state = 1; break;
        case 1: srcRect = {248, 433, 247, 178} ; state = 2; break;
        case 2: srcRect = {256, 24, 174, 134}; state = 0; break;
    }
}

Butterfly::Butterfly(){
    // src coorinates from assets.png file, they have been found using spritecow.com
    srcRect = {256, 24, 174, 134};

    // it will display pigeon on x = 30, y = 40 location, the size of pigeon is 50 width, 60 height
    moverRect = {30, 40, 50, 50};
}

Butterfly::Butterfly(int x, int y){
    // src coorinates from assets.png file, they have been found using spritecow.com
    srcRect = {256, 24, 174, 134};

    // it will display pigeon on x = 30, y = 40 location, the size of pigeon is 50 width, 60 height
    moverRect = {x, y, 50, 50};
}

