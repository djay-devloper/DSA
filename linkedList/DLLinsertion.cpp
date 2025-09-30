//covers insertion at all position and all cases.
#include<iostream>
using namespace std;
class Node{
    public:
    int data; 
    Node*prev;
    Node*next;
    
    Node(int data){
        this->data= data;
        prev= nullptr;
        next= nullptr;
    }
};

Node*head= nullptr;
int size= 0;        //keep track of size. whenever a function called/node added size increased by one.

void insertAthead(int data){
    Node*newNode= new Node(data);
    size++;

    //head is null
    if(head== nullptr){
        head= newNode;
        return;
    }

    newNode->next= head;
    head->prev= newNode;
    head= newNode;
 }

void insertAttail(int data){
    // Node*newNode= new Node(data);  create node in memory when needed otherwise memory leak
    // size++;                          

    //head is null
    if(head== nullptr){
        insertAthead(data);
        return;
    }
    Node*newNode= new Node(data);
    Node*itr= head;
    while(itr->next!= nullptr){
        itr= itr->next;
    }
    itr->next= newNode;
    newNode->prev= itr;
    size++;

}

void insertAtposition(int position, int data){
    
    //At first/head position.
    if(position== 1){
        insertAthead(data);
        // size++;                    already incresed in insertAtHead function call.
        return;
    }

    if(position< 0){
        cout<<"Not Possible. plz enter +tive value...";
        return;
    }

    if(position> size+1){
        cout<<"Position is out of range.."<<endl<<"press 1 if you wants to insert at tail or press 0 to skip";
        int val;
        cin>>val;
        if(val== 1){
            insertAttail(data);
            return;
        }
        if(val== 0){
            return;
        }
        
        cout<<"Tere ko 1 ya 0 enter krna tha chu..ye";

    }

    int count= 0;
    Node*itr= head;
    while(count< position-1){
        itr= itr->next;
        count++;
    }
    Node*newNode= new Node(data);
    Node*sideNode= itr->next;
    itr->next= newNode;
    newNode->prev= itr;
    newNode->next= sideNode;
    sideNode->prev= newNode;
    size++;
}

 void printList(){
    Node*itr= head;
    while(itr!= nullptr){
        cout<<itr->data<<" <-> ";
        itr= itr->next;
    }
    cout<<"NULL"<<endl;
 }
int main(){
    insertAtposition(1, 1);
    insertAttail(15);
    insertAttail(25);
    insertAthead(10);
    insertAttail(30);
    insertAthead(5);
    insertAtposition(10, 50);
    printList();
    cout<<"Size-: "<<size;
    return 0;
}