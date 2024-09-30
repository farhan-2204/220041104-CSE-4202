#include <iostream>
#include "employee.h"
#include <string>

using namespace std;

int main()
{
    employee e, e1;

    e.set_info();
    e1.set_info();

    employee temp = e.compareAge(e1);

    e.get_info();
    temp.get_info();

    return 0;
}
