#include "Animal.h"
#ifndef CAT_H
#define CAT_H

using namespace std;

class Cat: private Animal{
     private:

     public:
          Cat();
          ~Cat();

          void make_sound();
};

#endif // CAT_H
