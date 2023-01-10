#include "bee.hpp"
#include <iostream>
// bee implementation will go here.

void Bee::draw(){
    SDL_RenderCopy(Drawing::gRenderer, Drawing::assets, &srcRect, &moverRect);
    fly();
}

void Bee::fly(){
    // you have to do flying animations here
    // if(hover_my_zindagi_azab == false) moverRect.x += 5; //only moves if it is not hovering, else it won't
    // if(moverRect.x > 1000){Bee::~Bee; std::cout << "Bee destroyed\n";}
    switch(state){
        case 0: srcRect = {234, 630, 163, 162}; state = 1; break;
        case 1: srcRect = {409, 650, 171, 147} ; state = 2; break;
        case 2: srcRect = {63, 619, 151, 166}; state = 0; break;
    }

    //The hover functionality is implemented over here
    if(hover_my_zindagi_azab == false){
        moverRect.x += 5;
        int prob = rand() % 100;
        if(prob == 73 || prob == 37 || prob == 69 || prob == 42 || prob == 13) hover_my_zindagi_azab = true;
    } //Calculates probability for hover -> 5% chance -> 5% chance to randomly get any of these numbers from 0-99 [100 numbers and 5 choices]
    else if(hover_my_zindagi_azab == true){
        if(hover_frames_zindagi_azaaaabbb != 0) hover_frames_zindagi_azaaaabbb--;
        else if(hover_frames_zindagi_azaaaabbb == 0){
            hover_my_zindagi_azab = false; hover_frames_zindagi_azaaaabbb = 10;
        }
    } //If hover is true and 10 frames haven't passed yet, then it increases frames count, else it will reset frame count and hover will be set to false for bee to move again.

}

Bee::Bee(){
    // src coorinates from assets.png file, they have been found using spritecow.com
    srcRect = {63, 619, 151, 166};

    // it will display pigeon on x = 30, y = 40 location, the size of pigeon is 50 width, 60 height
    moverRect = {30, 40, 50, 50};
}

Bee::Bee(int x, int y){
    // src coorinates from assets.png file, they have been found using spritecow.com
    srcRect = {63, 619, 151, 166};

    // it will display pigeon on x = 30, y = 40 location, the size of pigeon is 50 width, 60 height
    moverRect = {x, y, 50, 50};
}

bool Bee::del_bee(){
    if(moverRect.x >= 1000) return true;
    else return false;
};

Bee::~Bee(){
    std::cout << "Bee has been deleted\n";
}
