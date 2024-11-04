#include <iostream>
#include <string>

using namespace std;

class Car{
private:
    string modelno;
    double price;

public:
    Car(){
        modelno = "1";
        price = 0;
    }

    Car(string _modelno, double _price){
        modelno = _modelno;
        price = _price;
    }

    ~Car(){}

    string getModel(){
        return modelno;
    }

    double getPrice(){
        return price;
    }

    void setModel(string s){
        modelno = s;
    }

    void setPrice(double d){
        price = d;
    }

    void display(){
        cout<<"Model No: "<<modelno<<", ";
        cout<<"Price: "<<price<<endl;
    }

    friend bool operator>=(const Car& c1, const Car& c2);
    friend bool operator<=(const Car& c1, const Car& c2);
    friend bool operator!=(const Car& c1, const Car& c2);
};

bool operator>=(const Car& c1, const Car& c2){
    if(c1.price >= c2.price)
        return true;
    return false;
}

bool operator<=(const Car& c1, const Car& c2){
    if(c1.price <= c2.price)
        return true;
    return false;
}

bool operator!=(const Car& c1, const Car& c2){
    if(c1.price != c2.price)
        return true;
    return false;
}

void sortbyprice(Car c[], int _size){
    for(int i=0; i<_size-1; i++){
        for(int j=i+1; j<_size; j++){
            if(c[i] >= c[j])
                swap(c[i], c[j]);
        }
    }
}

int main(){
    Car c[10];

    for(int i=0; i<10; i++){
        int x, y;
        string s;

        x = rand() % 2000;
        s = to_string(x);
        y = rand() % 10000000;

        c[i].setModel(s);
        c[i].setPrice(y);
    }

    sortbyprice(c, 10);

    for(int i=0; i<10; i++){
        c[i].display();
    }


    return 0;
}