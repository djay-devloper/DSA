// Abstraction with abstract class
#include <iostream>
using namespace std;

class Shape {   // Abstract class
public:
    // Pure virtual function
    virtual void draw() = 0;  
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Circle" << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Rectangle" << endl;
    }
};

int main() {
    //can't create an object that's why a pointer of shape type.
    Shape* s1;   // base class pointer

    Circle c;
    Rectangle r;

    s1 = &c;
    s1->draw();   // Circle’s implementation

    s1 = &r;
    s1->draw();   // Rectangle’s implementation

    return 0;
}

// 👉 Here, Shape defines the interface (draw()), while derived classes provide the implementation.
