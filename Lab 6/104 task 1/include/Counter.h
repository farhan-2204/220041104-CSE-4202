#include <iostream>
#ifndef COUNTER_H
#define COUNTER_H

using namespace std;

class Counter
{
     private:
          int count;
          int step;

     public:
          Counter();
          ~Counter();
          void setIncrementStep(int set_step);
          int getCount();
          void increment();
          void resetCount(int set_step = 1);
          Counter operator+(const Counter &c) const;
          bool operator==(const Counter &c) const;
          bool operator!=(const Counter &c) const;
          bool operator<(const Counter &c) const;
          bool operator>(const Counter &c) const;
          bool operator<=(const Counter &c) const;
          bool operator>=(const Counter &c) const;
          Counter operator+=(const Counter &c);
          Counter operator++();
          Counter operator++(int);
};

#endif
