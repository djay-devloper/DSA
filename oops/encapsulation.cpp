//Data members are kept private and accessed through well defined functions.
#include <iostream>
using namespace std;

class Student {
private:
    // Data members are hidden (encapsulation)
    string name;
    int age;

public:
    // Setter methods (to set values)
    void setName(string n) {
        name = n;
    }

    void setAge(int a) {
        if (a > 0)  // validation
            age = a;
    }

    // Getter methods (to access values)
    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }
};

int main() {
    Student s1;

    // Setting data through public methods
    s1.setName("Dhananjay");
    s1.setAge(20);

    // Accessing data through getters
    cout << "Name: " << s1.getName() << endl;
    cout << "Age: " << s1.getAge() << endl;

    return 0;
}
