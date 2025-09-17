// Abstraction by using access specifiers.
// Even without pure virtual functions, you can hide internal details using private and protected.
// 👉 Only expose necessary functions to the outside world.

#include <iostream>
using namespace std;

class Car {
private:
    void engineStart() {   // hidden from user
        cout << "Engine started..." << endl;
    }

public:
    void drive() {   // user-facing function
        engineStart();   // abstraction: user doesn't see this
        cout << "Car is driving..." << endl;
    }
};

int main() {
    Car myCar;
    myCar.drive();   // user just "drives" the car
    // myCar.engineStart(); ❌ not accessible
    return 0;
}

// User only sees drive(), but the actual implementation (engineStart()) is hidden.