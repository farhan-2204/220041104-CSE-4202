#include "Animal.h"
#ifndef COW_H
#define COW_H

using namespace std;

class Cow: public Animal{
     private:
          double milkProductionInLiters;

     public:
          Cow();
          ~Cow();

          void make_sound();
          void displayInformation();
          double getMilkProduction();

};

#endif // COW_H
