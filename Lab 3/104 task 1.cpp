#include <iostream>
 
using namespace std;

class Counter{
private:
    int count;
    int step;

public:
    Counter(){
        count = 0;
    }

    ~Counter(){

    }

    void setIncrementStep(int set_step){
        step = set_step;
    }

    int getCount(){
        return count;
    }

    void increment(){
        count += step;
    }

    void resetCount(){
        count = 0;
    }
};
 
int main()
{
    Counter cnt;

    // cnt.setIncrementStep(4);
    // cnt.increment();
    // cnt.increment();
    // cout<<"Current status: "<<cnt.getCount()<<endl;

    // cnt.resetCount();
    // cout<<"Current status: "<<cnt.getCount()<<endl;

    // cnt.setIncrementStep(3);
    // cnt.increment();
    // cout<<"Current status: "<<cnt.getCount()<<endl;

    return 0;
}