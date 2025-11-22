//Its implementation is very similar to circular queue.

#include<iostream>
using namespace std;

class deque{
    public:
    int* arr;
    int front_ptr;
    int rear_ptr;
    int size;

    public:
    deque(int size){
        this->size= size;
        arr= new int[size];
        front_ptr= rear_ptr= -1;
    }

    bool isFull(){
        return (rear_ptr+ 1)%size== front_ptr;
    }

    bool isEmpty(){
        return front_ptr== -1;
    }

    void push_back(int data){
        if(isFull()) {cout<<"full Queue \n"; return;}
        if(isEmpty()) {rear_ptr++; front_ptr++; arr[rear_ptr]= data; return;}
        rear_ptr= (rear_ptr+1)% size;
        arr[rear_ptr]= data;
    }

    void push_front(int data){
        if(isFull()) {cout<<"full Queue \n"; return;}
        if(isEmpty()){rear_ptr++; front_ptr++; arr[rear_ptr]= data; return;}
        front_ptr= (front_ptr-1+size)% size;
        arr[front_ptr]= data;
    }
    void pop_front() {
        if (isEmpty()) { cout << "Deque is empty\n"; return; }
        if (front_ptr == rear_ptr) { front_ptr = rear_ptr = -1; return; } // single element
        front_ptr = (front_ptr + 1) % size;
    }

    void pop_back() {
        if (isEmpty()) { cout << "Deque is empty\n"; return; }
        if (front_ptr == rear_ptr) { front_ptr = rear_ptr = -1; return; }
        rear_ptr = (rear_ptr - 1 + size) % size;
    }

    int fronts(){
        if(isEmpty()){
            cout<<"Queue is Empty \n";
            return -1;
        }

        return arr[front_ptr];
    }

    int back(){
        if(isEmpty()){
            cout<<"Empty Queue \n";
            return -1;
        }
        return arr[rear_ptr];
    }
};
int main(){
    deque dq(4);
    dq.push_back(2);
    dq.push_front(1);
    dq.push_back(3);
    cout<<dq.fronts()<<endl;
    cout<<dq.back();

    return 0;
}       