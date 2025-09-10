#include<string>
#include<iostream>
using namespace std;
class Car {
public:
    string brand;
    int year;
    //This is a default one called by compiler.
    Car(){
        cout<<"Default one is called automatically"<<endl;
    }

    // Constructor
    Car(string b, int y) {
        brand = b;
        year = y;
    }

    void display() {
        cout << brand << " - " << year << endl;
    }
};

int main() {
    Car c1;
    Car car1("Toyota", 2020);  // Constructor called here with given parameters
    car1.display();
    return 0;
}//since every constructer has same name hence no and type of parameter decide which one is to be called
