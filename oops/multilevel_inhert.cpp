//👉 A derived class is created from another derived class.

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

class Puppy : public Dog {
public:
    void weep() {
        cout << "Weeping..." << endl;
    }
};

int main() {
    Puppy p;
    p.eat();   // from Animal
    p.bark();  // from Dog
    p.weep();  // from Puppy
    return 0;
}