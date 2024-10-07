#include <iostream>
#include <cmath>
#include "Coordinate.h"

using namespace std;

void randomAssignment(Coordinate c[], int size){
    for(int i=0; i<size; i++){
        int x = rand() % 51, y = rand() % 51;
        c[i].move(x, y);
    }
}

void sort(Coordinate c[], int size){
     for(int i=0; i<size-1; i++){
          for(int j=i+1; j<size; j++){
               if(c[i].getDistance() > c[j].getDistance())
                    swap(c[i], c[j]);
          }
     }
}


int main(){
    Coordinate coord[10];
    randomAssignment(coord,10);
    sort(coord,10);

    for(int i=0;i<10;i++)
    {
        coord[i].display();
    }

    return 0;
}

