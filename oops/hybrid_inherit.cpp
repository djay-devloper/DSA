// 👉 Combination of two or more types of inheritance (like multiple + multilevel).
// ⚠️ May cause the diamond problem (when two base classes inherit the same class). This is solved using virtual inheritance.
#include <iostream>
using namespace std;

class Person {
public:
    void display() {
        cout << "I am a Person" << endl;
    }
};

class Student : virtual public Person {
public:
    void study() {
        cout << "I am studying" << endl;
    }
};

class Employee : virtual public Person {
public:
    void work() {
        cout << "I am working" << endl;
    }
};

class WorkingStudent : public Student, public Employee {
public:
    void showRole() {
        cout << "I am both Student and Employee" << endl;
    }
};

int main() {
    WorkingStudent ws;
    ws.display();   // from Person (no ambiguity due to virtual inheritance)
    ws.study();
    ws.work();
    ws.showRole();

    return 0;
}