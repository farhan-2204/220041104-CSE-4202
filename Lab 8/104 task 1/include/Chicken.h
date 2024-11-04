#include "Animal.h"
#ifndef CHICKEN_H
#define CHICKEN_H

using namespace std;

class Chicken: protected Animal{
     private:
          int dailyEggCount;

     public:
          Chicken();
          ~Chicken();

          void make_sound();
          void displayInformation();
          int getEggCount();
};

#endif // CHICKEN_H
