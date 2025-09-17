//FUNCTION OVERLOADING
//static polymorphism method 1. here we are just changing function argument type. return type of funcn doesn't matter.
#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    Calculator c;
    cout << c.add(2, 3) << endl;        // int version
    cout << c.add(2.5, 3.5) << endl;    // double version
    cout << c.add(1, 2, 3) << endl;     // 3 parameters
    return 0;
}
