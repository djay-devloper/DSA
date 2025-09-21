//there are two cases either list is empty or a given list with adress of its head.
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;

    Node(int data){
        this->data= data;
        next= NULL;
    }
};
void insertAtHead(Node* &head, int d){
    Node*newNode= new Node(d);
    //if list is empty then only make it head.
    if(head== NULL){
        head= newNode; 
        return;
    }
    //some nodes are already present 
    else{
        newNode->next= head;
        head= newNode;  
    }

}
void printList(Node* &head){
    Node*itr= head;
    while(itr!= NULL){
        cout<<itr->data<<"->";
        itr= itr->next;
    }
    cout<<"NULL";
}
int main(){
    Node*head= nullptr;
    insertAtHead(head, 10);
    insertAtHead(head, 20);
    insertAtHead(head, 30);
    printList(head);
    return 0;
}