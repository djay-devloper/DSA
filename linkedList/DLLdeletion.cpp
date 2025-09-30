//best implementaion includes all cases
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*prev;
    Node*next;

     Node(int d){
        this->data= d;
        prev= nullptr;
        next= nullptr;
     }  
};

Node*head= nullptr;
int size= 0;

void deleteAtHead(){
    if(head== nullptr){ return;}

    Node*temp= head;

    if(head->next== nullptr){      //only one node case is handled carefully to avoid segmentation fault.
        head= nullptr;
    }  
    else{                         //multiple nodes are present.
        head= head->next;
        head->prev= nullptr;
    }
    delete temp;
    size--;
}

void deleteAtTail(){
    if(head== nullptr){ return;}

    if(head->next== nullptr){ deleteAtHead(); return;}     //only one node
    
    Node*itr= head;
    while(itr->next!= nullptr){
        itr= itr->next;
    }
    Node*temp= itr;
    itr->prev->next= nullptr;
    itr->prev= nullptr;
    delete temp;
    size--;
}

void deleteAtPosition(int position){
    if(head== nullptr) return;
    if(position< 0){ cout<<"Invalid position.. "; return;}
    if(position== 1){ deleteAtHead(); return;}
    if(position== size){ deleteAtTail(); return;}
    if(position> size){
        cout<<"Position is out of range..."<<endl;
        return;
    }

    int count= 0;
    Node*itr= head;

    while(count< position-1){
        itr= itr->next;
        count++;
    }
    
    Node*temp= itr;
    itr->prev->next= itr->next;
    itr->next->prev= itr->prev;
    itr->next= nullptr;
    itr->prev= nullptr;
    delete temp;
    size--;
}

void printList(){
    Node*itr= head;
    while(itr!= nullptr){
        cout<<itr->data<<" <-> ";
        itr= itr->next;
    }
    cout<<"NULL"<<endl;
    cout<<"Size Now-- "<<size<<endl;
 }
 //for adding some nodes.
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

int main(){
    insertAthead(50);insertAthead(40);insertAthead(30);insertAthead(20);insertAthead(10);
    printList();
    deleteAtHead();
    printList();
    deleteAtPosition(3);
    printList();
    deleteAtTail();
    printList();
    deleteAtPosition(50);
    deleteAtPosition(1);
    deleteAtPosition(1);
    deleteAtPosition(1);
    deleteAtPosition(-2);
    printList();
    return 0;
}