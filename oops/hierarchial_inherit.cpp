//👉 Multiple classes inherit from the same base class.

#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Eating..." << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Barking..." << endl;
    }
};

class Cat : public Animal {
public:
    void meow() {
        cout << "Meowing..." << endl;
    }
};

int main() {
    Dog d;
    Cat c;

    d.eat();  // from Animal
    d.bark();

    c.eat();  // from Animal
    c.meow();

    return 0;
}