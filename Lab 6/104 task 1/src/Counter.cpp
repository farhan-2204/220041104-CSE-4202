#include <iostream>
#include "Counter.h"

Counter::Counter()
{
     step = 1;
     count = 0;
}

Counter::~Counter()
{

}

void Counter::setIncrementStep(int set_step){
     if(count != 0){
          cout<<"Cannot set increament step, count is not 0\n";
          return;
     }
     if(set_step < 1)
          return;
     step = set_step;
}

int Counter::getCount(){
     return count;
}

void Counter::increment(){
     count += step;
}

void Counter::resetCount(int set_step){
     count = 0;
     step = set_step;
}

Counter Counter::operator+(const Counter &c) const{
     Counter temp;

     if(this->step != c.step){
          cout<<"Increament step is not the same\n";
          return temp;
     }

     temp.step = c.step;
     temp.count = this->count + c.count;
     return temp;
}

bool Counter::operator==(const Counter &c) const{
     if(this->count == c.count)
          return true;
     return false;
}

bool Counter::operator!=(const Counter &c) const{
     if(this->count != c.count)
          return true;
     return false;
}

bool Counter::operator<(const Counter &c) const{
     if(this->count < c.count)
          return true;
     return false;
}

bool Counter::operator>(const Counter &c) const{
     if(this->count > c.count)
          return true;
     return false;
}

bool Counter::operator<=(const Counter &c) const{
     if(this->count <= c.count)
          return true;
     return false;
}

bool Counter::operator>=(const Counter &c) const{
     if(this->count >= c.count)
          return true;
     return false;
}

Counter Counter::operator+=(const Counter &c){
     this->count += c.count;
     this->step = max(this->step, c.step);
}

Counter Counter::operator++(){
     this->count += this->step;
}

Counter Counter::operator++(int){
     this->count += this->step;
}


