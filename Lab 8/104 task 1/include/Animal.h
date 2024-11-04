#include <iostream>
#include <string>
#ifndef ANIMAL_H
#define ANIMAL_H

using namespace std;

class Animal
{
     private:
          string nameOfAnimal;
          string habitat_area;
          string sound;
          int weight;
          int height;

     public:
          //Animal();
          Animal(string nameOfAnimal = "Not Mentioned", string habitat_area = "Wild", string sound = "Growl", int weight = 45, int height = 90);
          ~Animal();

          void displayInformation();
          void changeWeight(int _weight);
          void changeSound(string sound = "Moo");
          void make_sound();


};

#endif // ANIMAL_H
