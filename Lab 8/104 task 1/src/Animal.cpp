#include "Animal.h"

Animal::Animal(string _nameOfAnimal, string _habitat_area, string _sound, int _weight, int _height)
{
     nameOfAnimal = _nameOfAnimal;
     habitat_area = _habitat_area;
     sound = _sound;
     weight = _weight;
     height = _height;
}

Animal::~Animal()
{

}

void Animal::displayInformation(){
     cout<<"Name: "<<nameOfAnimal<<endl;
     cout<<"Habitat: "<<habitat_area<<endl;
     cout<<"Sound: "<<sound<<endl;
     cout<<"Weight: "<<weight<<endl;
     cout<<"Height: "<<height<<endl;
}

void Animal::changeWeight(int _weight){
     weight = _weight;
}

void Animal::changeSound(string _sound){
     sound = _sound;
}

void Animal::make_sound(){
     cout<<sound<<"!!!"<<endl;
}


