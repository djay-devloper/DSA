#include <iostream>
using namespace std;

class Student {
    string name;

public:
    Student(string n) {
        name = n;                //Static allocation
        cout << "Constructor called for " << name << endl;
    }

    ~Student() {
        cout << "Destructor called for " << name << endl;
    }
};

int main() {
    Student s1("Rahul");  // constructor runs
    {
        Student s2("Aman"); // constructor runs
    }   // s2 goes out of scope → destructor runs here

    cout << "Back in main function" << endl;
    return 0; // s1 goes out of scope → destructor runs
}
/*If an object allocated dynamically then you need to call destructor manualy. compiler don't call automatically*/