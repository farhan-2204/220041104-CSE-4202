#include <iostream>
#include <string>
 
using namespace std;

class Temperature{
private:
    float value;
    string unit;

public:
    Temperature(){
        value = 0;
        unit = "Kelvin";
    }

    ~Temperature(){

    }

    void assign(float new_value, string new_unit){
        value = new_value;
        unit = new_unit;
    }

    void print(){
        cout<<"\"The temperature is "<<value<<" "<<unit<<".\""<<endl;
    }

    void convert(string new_unit){
        if(new_unit == unit)
            return;

        float new_value;

        if(new_unit == "Celcius"){
            if(unit == "Farenheit")
                new_value = (value-32)*(5/9);
            else
                new_value = value - 273.15;
        }
        else if(new_unit == "Farenheit"){
            if(unit == "Celcius")
                new_value = (value*1.8) + 32;
            else
                new_value = ((value-273.15)*1.8) + 32;
        }
        else if(new_unit == "Kelvin"){
            if(unit == "Celcius")
                new_value = value + 273.15;
            else
                new_value = ((value-32)*(5/9)) + 273.15;
        }

        if(new_value < 0)
            cout<<"Invalid Operation"<<endl;
        else{
            value = new_value;
            unit = new_unit;
        }
    }
};
 
int main()
{
    Temperature t;

    // t.assign(310, "Kelvin");
    // t.print();

    // t.convert("Celcius");
    // t.print();

    // t.convert("Farenheit");
    // t.print();

    // t.assign(144, "Celcius");
    // t.print();

    return 0;
}