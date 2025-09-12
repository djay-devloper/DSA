#include <iostream>
using namespace std;

class Student {
public:
    int *age;

    Student(int a) {
        age = new int(a);
    }

    // User-defined deep copy constructor
    Student(const Student &obj) {
        cout << "Deep copy constructor called!" << endl;
        age = new int(*obj.age);   // ✅ new memory allocated, value copied
    }

    void show() {
        cout << "Age: " << *age << endl;
    }

    ~Student() {
        delete age;   // safe, each object deletes its own memory
    }
};

int main() {
    Student s1(20);

    // Deep copy
    Student s2 = s1;

    cout << "Before change:" << endl;
    s1.show();
    s2.show();

    *s1.age = 25;   // modify s1’s age

    cout << "After change:" << endl;
    s1.show();
    s2.show();

    return 0;
}
