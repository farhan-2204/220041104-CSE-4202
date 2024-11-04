#include "Chicken.h"

Chicken::Chicken():Animal("Chicken", "Farm", "Buck Buck", 5, 20), dailyEggCount(8){}


Chicken::~Chicken()
{

}

void Chicken::make_sound(){
     changeSound("Buck Buck");
     cout<<"The Chicken says: ";
     Animal::make_sound();
}

void Chicken::displayInformation(){
     Animal::displayInformation();
     cout<<"Daily Egg Count: "<<dailyEggCount<<endl;
}

int Chicken::getEggCount(){
     return dailyEggCount;
}
