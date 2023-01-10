#include <iostream>
#include "HUMania.hpp"

void HUMania::drawObjects()
{
    // call draw functions of all the objects here
    // p1.draw();
    // p1.fly(); // this function is called to move the pigeon
    // bf1.draw(); bf1.fly();
    // b1.draw(); b1.fly();

    int iter_pigeon = 0, iter_butter = 0, iter_bee = 0;
    while(iter_pigeon < pigeons.size()){
        pigeons[iter_pigeon]->draw(); pigeons[iter_pigeon]->fly(); iter_pigeon++;
    }
    while(iter_butter < butterflies.size()){
        butterflies[iter_butter]->draw(); butterflies[iter_butter]->fly(); iter_butter++;
    }
    while(iter_bee < bees.size()){
        bees[iter_bee]->draw(); bees[iter_bee]->fly();  
        if(bees[iter_bee]->del_bee() == true){
            // bees[iter_bee]->~Bee();
            delete bees[iter_bee];
            bees.erase(bees.begin() + iter_bee);
            cout << "Bee " << iter_bee << " deleted\n"; 
            // cout << bees.size() << endl;
        }
        iter_bee++;
    }
}

void HUMania::createObject(int x, int y)
{
    std::cout << "Mouse clicked at: " << x << " -- " << y << std::endl;

    int val = rand() % 3;
    if(val == 0){
        Pigeon *pigee = new Pigeon(x, y); pigeons.push_back(pigee);
    }
    else if(val == 1){
        Butterfly *butterfree = new Butterfly(x, y); butterflies.push_back(butterfree);
    }
    else if(val == 2){
        Bee *shehed_ki_makhi = new Bee(x, y); bees.push_back(shehed_ki_makhi);
    }
}
