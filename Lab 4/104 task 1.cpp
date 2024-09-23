#include <iostream>
 
using namespace std;

class Calculator{
private:
    int current;

    int _getCurrent(){
        return current;
    }

    void _setCurrent(int value){
        current = value;
    }

public:
    Calculator(){
        current = 0;
    }

    Calculator(int value){
        current = value;
    }

    ~Calculator(){
        display();
        cout<<"Destructor of the Calculator object is called."<<endl;
    }

    int getCurrent(){
        return _getCurrent();
    }

    void setCurrent(int value){
        _setCurrent(value);
    }

    void add(int value){
        current += value;
    }

    void substract(int value){
        current -= value;
    }

    void multiply(int value){
        current *= value;
    }

    int divideBy(int value){
        if(value == 0){
            cout<<"Invalid arithmetic operation"<<endl;
            return -1;
        }

        int mod = current % value;
        current /= value;
        return mod;
    }

    void clear(){
        current = 0;
    }

    void display(){
        cout<<"Calculator display: "<<current<<endl;
    }
    
};
 
int main()
{
    Calculator calc, calc1(10);

    calc.add(10);
    calc.display();
    calc.multiply(3);
    calc.display();
    calc.divideBy(0);
    calc.divideBy(4);
    calc.display();

    return 0;
}