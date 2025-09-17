//This is called basic inheritance.
#include <iostream>
using namespace std;

// Base Class
class Person {
public:
    string name;
    int age;

    void displayPerson() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Derived Class
class Student : public Person {
public:
    int rollNo;

    void displayStudent() {
        cout << "Roll No: " << rollNo << endl;
    }
};

int main() {
    Student s1;
    s1.name = "Dhananjay";   // inherited from Person
    s1.age = 20;             // inherited from Person
    s1.rollNo = 101;

    s1.displayPerson();      // using base class method
    s1.displayStudent();     // using derived class method

    return 0;
}
