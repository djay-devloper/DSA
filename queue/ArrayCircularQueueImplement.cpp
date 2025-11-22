#include<iostream>
using namespace std;

class queue{
    public:
    int* arr;
    int front;
    int rear;
    int size;

    queue(int size){
        this->size= size;
        front= rear= -1;
        arr= new int[size];
    }

    bool isEmpty(){
        return front== -1;
    }

    bool isfull(){
        //when next of rear is front.
        return (rear+1)% size== front;
    }

    void enqueue(int value){
        if(isfull()) {cout<<"Queue is full \n"; return;}

        //First element to insert.
        if(front== -1){
            front++;
            rear++;
            arr[rear]= value;
            return;
        }

        rear= (rear+1)% size;
        arr[rear]= value;
    }

    void dequeue(){                //In circular queue the rear> front condition is not required.
        if(isEmpty()){
            cout<<"Empty Queue \n";
            return;
        }

        //Only one element is there.
        if(front== rear){
            front= rear= -1;
        }
        
        else{
            front= (front+ 1)% size;
        }
    }

    int fronts(){
        if(isEmpty()){
            cout<<"Queue is Empty \n";
            return -1;
        }

        return arr[front];
    }

    int back(){
        if(isEmpty()){
            cout<<"Empty Queue \n";
            return -1;
        }
        return arr[rear];
    }
};
int main(){
    queue q(4);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    cout<<q.fronts()<<endl;
    cout<<q.back()<<endl;
    q.dequeue();
    q.dequeue();
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);
    cout<<q.fronts()<<endl;
    cout<<q.back()<<endl;
    return 0;
}