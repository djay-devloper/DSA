//there will be at least one node
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next= NULL;

    Node(int data){
        this->data= data;
        next= nullptr;
    }
};

void insertAtTail(Node* &head, int data){
    Node*newNode= new Node(data);
    Node*itr= head;
    while(itr->next!= nullptr){
        itr= itr->next;
    }
    itr->next= newNode;
}
 
 void PrintList(Node* &head){
    Node*iterator= head;
    while(iterator!= NULL){
        cout<<iterator->data<<"-->";
        iterator= iterator->next;
    }
    cout<<"NULL";
 }
int main(){
    Node*n1= new Node(10);
    Node*n2= new Node(20);
    Node*n3= new Node(30);

    //Linking them
    n1->next= n2;
    n2->next= n3;
    insertAtTail(n1, 40);
    PrintList(n1);
    return 0;
}