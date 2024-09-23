#include <iostream>
#include <string>

using namespace std;

class myClass{
private:
    int Flight_Number;
    string Destination;
    float Distance;
    float MaxFuelCapacity;

    double CalFuel(float distance){
        if(distance <= 1000)
            return 500;
        if(distance <= 2000)
            return 1100;
        return 2200;
    }

public:
    myClass(){
        Flight_Number = 1;
        Destination = "Tokyo";
        Distance = 2000;
        MaxFuelCapacity = 2000;
    }

    ~myClass(){

    }

    void FeedInfo(){
        int flight_Number;
        string destination;
        float distance;
        float maxFuelCapacity;

        cout<<"Enter Flight Number: ";
        cin>>flight_Number;
        cout<<"Enter Destination: ";
        cin>>destination;
        cout<<"Enter Distance: ";
        cin>>distance;
        cout<<"Enter Max Fuel: ";
        cin>>maxFuelCapacity;

        Flight_Number = flight_Number;
        Destination = destination;
        Distance = distance;
        MaxFuelCapacity = maxFuelCapacity;
    }

    void ShowInfo(){
        cout<<"Flight Number: "<<Flight_Number<<endl;
        cout<<"Destination: "<<Destination<<endl;
        cout<<"Distance: "<<Distance<<endl;
        cout<<"Max Fuel: "<<MaxFuelCapacity<<endl;

        float fuel = CalFuel(Distance);

        if(fuel <= MaxFuelCapacity)
            cout<<"Fuel capacity is fit for this flight distance"<<endl;
        else
            cout<<"Not sufficient Fuel Capacity for this flight."<<endl;
    }
};

int main()
{
    myClass flight;

    flight.FeedInfo();
    flight.ShowInfo();

    return 0;
}
