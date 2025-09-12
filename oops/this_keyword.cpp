//explain the example when name of parameter in constructer and a data member of class is same. we use this keyword. explain this keyword
// #include<iostream>
// using namespace std;
// class Student {
//     string name;    data member
//     int age;        data member

// public:
//     Student(string name, int age) {
//         name = name;    ❌ Problem here
//         age = age;      ❌ Problem here
//     }
// };
#include <iostream>
using namespace std;

class Student {
    string name;
    int age;

public:
    // Parameterized constructor with same names
    Student(string name, int age) {
        this->name = name;  // "this->name" = object's data member
        this->age = age;    // "age" = constructor parameter
    }

    void show() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s1("Dhananjay", 21);
    Student s2("Aman", 22);

    s1.show();
    s2.show();

    return 0;
}
