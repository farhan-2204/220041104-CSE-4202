#include <iostream>
#include "Counter.h"

using namespace std;

int main()
{
    Counter c1, c2, c3;
    c2.increment();
    c2.increment();
    c3.increment();
    c1 = c2 + c3;

    if(c1 != c3)
       cout<<"Not equal\n";
    else
       cout<<"Equal\n";

    c3 += c1;
    c3++;
    ++c3;
    cout<<c3.getCount()<<endl;
}
