#include "Cat.h"

Cat::Cat():Animal("Cat", "Wild", "Meow", 10, 15){}


Cat::~Cat()
{

}

void Cat::make_sound(){
     changeSound("Meow");
     cout<<"The Cat says: ";
     Animal::make_sound();
}
