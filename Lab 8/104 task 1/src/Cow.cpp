#include "Cow.h"

Cow::Cow():Animal("Cow", "Ranch", "Moo", 350, 150), milkProductionInLiters(2000){}


Cow::~Cow()
{

}

void Cow::make_sound(){
     changeSound("Moo");
     cout<<"The Cow says: ";
     Animal::make_sound();
}

void Cow::displayInformation(){
     Animal::displayInformation();
     cout<<"Daily Milk Production: "<<milkProductionInLiters<<endl;
}

double Cow::getMilkProduction(){
     return milkProductionInLiters;
}
