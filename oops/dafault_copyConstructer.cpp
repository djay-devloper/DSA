/*If you don’t write a copy constructor, C++ automatically creates one.
It simply copies each data member as it is (shallow copy). */
#include <iostream>
using namespace std;

class Student {
    string name;
    int age;

public:
    // Parameterized constructor
    Student(string n, int a) {
        name = n;
        age = a;
    }

    // No copy constructor written here → compiler gives default one

    void show() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s1("Rahul", 20);

    // Default copy constructor will be used
    Student s2 = s1;

    s1.show();
    s2.show();

    return 0;
}
