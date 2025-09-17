//Dynamic polymorphism (Function overriding)
// 👉 Derived class provides a different implementation of a function already defined in the base class.
// 👉 Achieved using the virtual keyword. it is achieved only by inheritance only.
// you can write the same function in both base and derived classes without virtual.
// That looks like overriding, but in reality, C++ treats it as function hiding, not true overriding and true polymorphism.

#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {   // virtual function
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {   // overriding
        cout << "Dog barks" << endl;
    }
    //If this particular class doesn't have its own sound function and its own object calling sound function 
    //then parent's sound function is executed
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows" << endl;
    }
};

int main() {
    Animal* a;   // base class pointer

    Dog d;
    Cat c;

    a = &d;
    a->sound();   // Calls Dog's sound()

    a = &c;
    a->sound();   // Calls Cat's sound()

    return 0;
}