#include <iostream>
#include <cmath>
#ifndef COORDINATE_H
#define COORDINATE_H

using namespace std;


class Coordinate
{
     private:
          float abscissa;
          float ordinate;

     public:
          Coordinate();
          Coordinate(float x, float y);
          ~Coordinate();
          float operator-(Coordinate c) const;
          float getDistance();
          void move_x(float val);
          void move_y(float val);
          void move(float x_val, float y_val);
          void display();
          bool operator==(Coordinate &c);
          bool operator!=(Coordinate &c);
          bool operator<(Coordinate &c);
          bool operator>(Coordinate &c);
          bool operator<=(Coordinate &c);
          bool operator>=(Coordinate &c);
};

#endif
