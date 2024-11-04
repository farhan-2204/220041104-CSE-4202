#include "PetCat.h"

PetCat::PetCat(){}


PetCat::~PetCat(){}

void PetCat::make_sound(){
     cout<<petName<<" says: Meow!!!"<<endl;
}

void PetCat::setPetName(string name){
     petName = name;
}
