#include <iostream>
#include <string>
 
using namespace std;

class Time{
private:
    int hour;
    int minute;
    int second;

public:
    Time(){
        hour = 0;
        minute = 0;
        second = 0;
    }

    ~Time(){

    }

    int hours(){
        return hour;
    }

    int minutes(){
        return minute;
    }

    int seconds(){
        return second;
    }

    void reset(int h, int m, int s){
        hour = h;
        minute = m;
        second = s;
    }

    void advance(int h, int m, int s){
        int tempm = 0, temps = 0;

        second += s;
        if(second >= 60){
            temps += second/60;
            second %= 60;
        }

        minute += temps + m;
        if(minute >= 60){
            tempm += minute/60;
            minute %= 60;
        }

        hour += tempm + h;
        if(hour >= 24){
            hour %= 24;
        }
    }

    void print(){
        cout<<"Current Time: "<<hour<<":"<<minute<<":"<<second<<endl;
    }
};
 
int main()
{
    Time time;

    // time.reset(3, 42, 28);
    // time.print();

    // time.advance(2, 22, 21);
    // time.print();

    // time.advance(57, 243, 2043);
    // time.print();

    return 0;
}