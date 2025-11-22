#include<iostream>
using namespace std;

// a node was needed for implementatiion
class node{
    public:
    int data;
    node* next;

    node(int data){
        this->data= data;
        next= nullptr;
    }
};

// real queue class.
class queue{
    public:
    node* front_ptr;
    node* rear_ptr;
    
    public:
    queue(){
        front_ptr= nullptr;
        rear_ptr= nullptr;
    }

    void enqueue(int value){
    node*newNode= new node(value);

    // if rear_ptr is empty it means Queue is empty.
    if(rear_ptr== nullptr){
        rear_ptr= front_ptr= newNode;
        return;
    }
    
    rear_ptr->next= newNode;
    rear_ptr= newNode;
}

void dequeue(){
    if(front_ptr== nullptr){
        cout<<"Queue is empty \n";
        return;
    }

    node* temp= front_ptr;
    front_ptr= front_ptr->next;

    // We had a single node which is  deleted, but rear_ptr would still point on that, so handled separately.
    if(front_ptr== nullptr){
        rear_ptr= nullptr;
    }
    delete temp;
}

int front(){
    if(front_ptr== nullptr) {cout<<"Queue is empty \n"; return -1;}
    return front_ptr->data;
}

int back(){
    if(rear_ptr== nullptr) {cout<<"Queue is empty \n"; return -1;}
    return rear_ptr->data;
}

bool isEmpty(){
    return front_ptr= nullptr;
}
};

int main(){
    queue q;
    q.front();
    q.back();
    q.enqueue(1);
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.dequeue();
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    cout<<q.isEmpty();
    return 0;
}