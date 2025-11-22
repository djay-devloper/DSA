#include<iostream>
using namespace std;

class queue{
    public:
    int* arr;
    int size;
    int front;
    int rear;
    
    public:
    queue(int size){
        this->size= size;
        front= rear= -1;
        arr= new int[size];
    }

    void enqueue(int data){
        if(rear== size-1) {cout<<"Queue is full \n"; return;}

        if(rear== -1){
            front++; rear++;
            arr[rear]= data;
            return;
        }

        rear++;
        arr[rear]= data;
    }

    void dequeue(){
        if(front== -1) {cout<<"Queue is empty \n"; return;}

        front++;

        //Rear will always be greater than front to utilize space better.
        if(front> rear){
            front= rear= -1;
        }
    }

    int fronts(){
        if(front== -1){
            cout<<"Empty Queue \n";
            return -1;
        }
        return arr[front];
    }

    int back(){
        if(rear== -1){
            cout<<"Empty Queue \n";
            return -1;
        }
        return arr[rear];
    }

    bool isEmpty(){
        return (front== -1);
    }
};
int main(){
    queue q(5);
    q.fronts();
    q.back();
    q.enqueue(1);
    cout<<q.fronts()<<endl;
    cout<<q.back()<<endl;
    q.enqueue(2);
    q.enqueue(3);
    q.dequeue();
    cout<<q.fronts()<<endl;
    cout<<q.back()<<endl;
    cout<<q.isEmpty();
    return 0;
}