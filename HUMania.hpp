#include<SDL.h>
#include "pigeon.hpp"
#include "bee.hpp"
#include "butterfly.hpp"
#include<vector>
#include<list>
using namespace std;

class HUMania{

    //Right now we're creating one pigeon, 
    // Pigeon p1;
    // Butterfly bf1;
    // Bee b1;

    // In the solution you have to create vectors of pigeons, butterflies, and bees
    vector<Pigeon*> pigeons;
    vector<Butterfly*> butterflies;
    vector<Bee*> bees;

    public:
    void drawObjects(); 
    void createObject(int, int);
    
    ~HUMania(){
        // int ip = pigeons.size(); int ibf = butterflies.size(); int ib = bees.size();
        while (pigeons.empty() == false){
            // delete pigeons[ip]; pigeons.erase(pigeons.begin() + ip); ip--;
            auto ip = pigeons.begin(); pigeons.erase(ip);
            cout << "Pigeon deleted\n";
        }
        while (butterflies.empty() == false){
            // delete butterflies[ibf]; butterflies.erase(butterflies.begin() + ibf); ibf--;
            auto ibf = butterflies.begin(); butterflies.erase(ibf);
            cout << "Butterfly deleted\n";
        }
        while(bees.empty() == false){
            // delete bees[ib]; bees.erase(bees.begin() + ib); ib--;
            auto ib = bees.begin(); bees.erase(ib);
            cout << "Bee deleted\n";
        }
    }
};