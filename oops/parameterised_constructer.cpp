//A parameterized constructor → takes values (parameters) and sets them when the object is created.
/*Imagine you have a Student class.
When you create a student, you want to give them a name and age right away.*/
#include <iostream>
using namespace std;

class Student {
    string name;
    int age;

public:
    // Parameterized constructor
    Student(string n, int a) {
        name = n;   // set name
        age = a;    // set age
    }

    void show() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    // Creating objects with values
    Student s1("Rahul", 18);
    Student s2("Anita", 20);

    s1.show();
    s2.show();

    return 0;
}
// A parameterized constructor is like giving details about an object at the time of making it, instead of filling them later.