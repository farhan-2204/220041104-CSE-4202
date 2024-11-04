#include "Cat.h"
#ifndef PETCAT_H
#define PETCAT_H

using namespace std;


class PetCat: public Cat{
     private:
          string petName;

     public:
          PetCat();
          ~PetCat();

          void setPetName(string name);
          void make_sound();

};

#endif // PETCAT_H
