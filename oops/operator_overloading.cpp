//static polymorphism method 2. here the working of a operator is altered on basis of context.
#include <iostream>
using namespace std;

class Complex {
public:
    int real, imag;

    Complex(int r=0, int i=0) {
        real = r;
        imag = i;
    }

    // Overload + operator
    Complex operator + (Complex const &obj) {
        return Complex(real + obj.real, imag + obj.imag);
    }
};

int main() {
    Complex c1(3, 2), c2(1, 7);
    Complex c3 = c1 + c2;  // operator overloading

    cout << "Result: " << c3.real << " + " << c3.imag << "i" << endl;
    return 0;
}
