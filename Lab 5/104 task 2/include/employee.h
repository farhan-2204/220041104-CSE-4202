#include <iostream>
#include <bits/stdc++.h>
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

using namespace std;

class employee
{
     private:
          string name;
          string dob[3];
          int salary;

     public:
          employee();
          ~employee();

          void setter(string _name, string dob0, string dob1, string dob2, int salary);
          tuple<string, string, string, string, int> getter();
          void set_info();
          void get_info();
          employee compareAge(employee e);
};

#endif
