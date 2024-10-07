#include "Coordinate.h"

Coordinate::Coordinate()
{
     abscissa = 0;
     ordinate = 0;
}

Coordinate::Coordinate(float x, float y)
{
     abscissa = x;
     ordinate = y;
}

Coordinate::~Coordinate()
{

}

float Coordinate::operator-(Coordinate c) const{
     float dist = sqrt( pow(this->abscissa - c.abscissa, 2) + pow(this->ordinate - c.ordinate, 2) );
     return dist;
}

float Coordinate::getDistance(){
     return sqrt( pow(this->abscissa, 2) + pow(this->ordinate, 2) );
}

void Coordinate::move_x(float val){
     abscissa += val;
}

void Coordinate::move_y(float val){
     ordinate += val;
}

void Coordinate::move(float x_val, float y_val){
     abscissa += x_val;
     ordinate += y_val;
}

void Coordinate::display(){
     cout<<abscissa<<" "<<ordinate<<" "<<getDistance()<<endl;
}

bool Coordinate::operator==(Coordinate &c) {
     if(this->getDistance() == c.getDistance())
          return true;
     return false;
}

bool Coordinate::operator!=(Coordinate &c){
     if(this->getDistance() != c.getDistance())
          return true;
     return false;
}

bool Coordinate::operator<(Coordinate &c){
     if(this->getDistance() < c.getDistance())
          return true;
     return false;
}

bool Coordinate::operator>(Coordinate &c){
     if(this->getDistance() > c.getDistance())
          return true;
     return false;
}

bool Coordinate::operator<=(Coordinate &c){
     if(this->getDistance() <= c.getDistance())
          return true;
     return false;
}

bool Coordinate::operator>=(Coordinate &c){
     if(this->getDistance() >= c.getDistance())
          return true;
     return false;
}
