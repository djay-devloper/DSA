//User defined shallow copy constructer.
#include <iostream>
using namespace std;

class Student {
public:
    int *age;

    Student(int a) {
        age = new int(a);   // dynamic memory
    }

    // User-defined shallow copy constructor
    Student(const Student &obj) {
        cout << "Shallow copy constructor called!" << endl;
        age = obj.age;   // ❌ only pointer copied (same memory shared)
    }

    void show() {
        cout << "Age: " << *age << endl;
    }

    ~Student() {
        delete age;   // both objects will try to delete same memory → problem
    }
};

int main() {
    Student s1(20);

    // Shallow copy
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
/*❌ Both objects share same memory → changing one changes the other.
❌ At program end, destructor tries to delete memory twice → runtime error.*/