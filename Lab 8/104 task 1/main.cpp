#include <iostream>
#include <string>
#include "Animal.h"
#include "Cow.h"
#include "Cat.h"
#include "PetCat.h"
#include "Chicken.h"

using namespace std;

int main()
{

     Animal animal;
     Chicken chicken;
     Cow cow;
     Cat cat;
     PetCat pcat;

     animal.displayInformation();
     animal.make_sound();
     cout<<endl;

     chicken.displayInformation();
     chicken.make_sound();
     cout<<endl;

     cow.displayInformation();
     cow.make_sound();
     cout<<endl;

     cat.make_sound();
     cout<<endl;

     pcat.setPetName("Torracat");
     pcat.make_sound();
     cout<<endl;



     return 0;
}
