#include <iostream>
using namespace std;

class Queue{
    public:
    int *arr;
    int front;
    int rear;
    int size;

    //constructer
    Queue(int s){
        size= s;
        front= -1;
        rear= -1;
        arr= new int[size];
    }

    void enqueue(int ele){
        //If Queue is already full.
        if(rear== size-1){
            cout<<"Queue is full"<<endl;
            return;
        }

        //if inserting first element.
        if(front== -1){
            front= 0;
        }
        rear++;
        arr[rear]= ele;
        cout<<ele<<" enqueued"<<endl;
    }

    void dequeue(){
        //If queue is already empty.
        if(front== -1 || front>rear){
            cout<<"Queue is empty"<<endl;
            return;
        }
        cout<<arr[front]<<" dequeued"<<endl;
        front++;

        //setting initial once queue is empty to reuse space.
        if(front> rear){
            front= rear= -1;
        }
    }

    void fronts(){
        if(front== -1 || front>rear){
            cout<<"queue is empty"<<endl;
        }
        else{
            cout<<"front element: "<<arr[front]<<endl;
        }
    }
};

int main(){
    Queue q(5);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.fronts();
    q.dequeue();
    q.fronts();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    return 0;
}