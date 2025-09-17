//👉 A single class inherits from multiple base classes.
//⚠️ Can cause ambiguity if base classes have the same function (solved by scope resolution ::).
#include <iostream>
using namespace std;

class Teacher {
public:
    void teach() {
        cout << "Teaching..." << endl;
    }
};

class Singer {
public:
    void sing() {
        cout << "Singing..." << endl;
    }
};

class Person : public Teacher, public Singer {
public:
    void show() {
        cout << "I am a Person with multiple talents." << endl;
    }
};

int main() {
    Person p;
    p.teach();  // from Teacher
    p.sing();   // from Singer
    p.show();   // own method
    return 0;
}
