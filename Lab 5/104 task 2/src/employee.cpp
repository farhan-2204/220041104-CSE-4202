#include "employee.h"

employee::employee()
{
     name = "John Doe";
     dob[0] = "1"; dob[1] = "January"; dob[2] = "2002";
     salary = 10000;
}

employee::~employee()
{

}

void employee::setter(string _name, string dob0, string dob1, string dob2, int _salary){
     name = _name;
     if(name.size() < 3)
          name = "John Doe";

     dob[0] = dob0; dob[1] = dob1; dob[2] = dob2;
     int x = stoi(dob[2]);
     if(x > 2006){
          dob[0] = "1"; dob[1] = "January"; dob[2] = "2002";
     }

     salary = _salary;
     if(salary < 10000 || salary > 100000)
          salary = 10000;
}

tuple<string, string, string, string, int> employee::getter(){
     return {name, dob[0], dob[1], dob[2], salary};
}

void employee::set_info(){
     string _name;
     string _dob[3];
     int _salary;

     ///Name Part
     cout<<"\nEnter name: ";
     getline(cin, _name);

     ///Date Part
     cout<<"Enter Date of Birth: ";
     cin>>_dob[0]>>_dob[1]>>_dob[2];

     ///Salary Part
     cout<<"Enter Salary: ";
     cin>>_salary;

     cin.ignore();
     setter(_name, _dob[0], _dob[1], _dob[2], salary);
}

void employee::get_info(){
     cout<<"\nName: "<<get<0>(getter())<<endl;
     cout<<"Date of Birth: "<<get<1>(getter())<<" "<<get<2>(getter())<<" "<<get<3>(getter())<<endl;
     cout<<"Salary: "<<get<4>(getter())<<endl;
}

employee employee::compareAge(employee e){
     employee temp;

     int x = stoi(dob[2]);

     tuple<string, string, string, string, int> temp1;
     temp1 = e.getter();
     int y = stoi( get<3>(temp1) );

     if(x < y){
          temp.name = name;
          temp.dob[0] = dob[0];
          temp.dob[1] = dob[1];
          temp.dob[2] = dob[2];
          temp.salary = salary;
     }
     else
          temp = e;

     return temp;
}
