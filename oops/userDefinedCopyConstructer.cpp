//If you create your own copy constructor, you can control how data is copied.
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

    // User-defined copy constructor. An object is passed by reference.
    Student(const Student &obj) {
        cout << "User-defined copy constructor called!" << endl;
        name = obj.name;   // copying data
        age = obj.age;
    }

    void show() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s1("Aman", 22);

    // Our own copy constructor will be used
    Student s2 = s1;
    // Student s2(s1);   both are same

    s1.show();
    s2.show();

    return 0;
}
/*If your class has only normal variables (like int, string, float), the default copy constructor is fine.
If your class has pointers or dynamic memory, you must write a user-defined copy constructor to avoid problems.*/