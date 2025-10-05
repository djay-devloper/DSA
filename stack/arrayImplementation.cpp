#include <iostream>
using namespace std;

class Stack {
public:
    int *arr;
    int top;
    int size;

    Stack(int size) {
        this->size = size;
        arr = new int[size];    //Static array implementation.
        top = -1;
    }
    //bool return type to tell caller whether operation successfull or not.
    bool push(int data) {
        if (top >= size - 1) {
            cout << "Stack Overflow.." << endl;
            return false;
        }
        arr[++top] = data;
        return true;
    }

    bool pop() {
        if (top < 0) {
            cout << "Stack Underflow.." << endl;
            return false;
        }
        //Just moving pointer but not deleting value in original array bcz that's not stack functionality.
        //if you want then replace it with zero before moving for any security reasons.
        top--;
        return true;
    }

    int peek() {
        if (top >= 0) {
            return arr[top];
        } else {
            cout << "Empty stack" << endl;
            return -1; // sentinel
        }
    }

    bool empty() {
        return (top == -1);
    }

    ~Stack() {
        delete[] arr;
    }
};

int main() {
    Stack s(3);

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40); // overflow

    cout << "Top element: " << s.peek() << endl;

    s.pop();
    cout << "After pop, top: " << s.peek() << endl;

    //We got the advantage of using bool return type.
    while (!s.empty()) {
        cout << "Popping: " << s.peek() << endl;
        s.pop();
    }

    s.pop(); // underflow
    s.peek();

    return 0;
}
