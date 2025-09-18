#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next= NULL;
};
 //insert at tail
 void insertAtTail(Node* &tail , int data){
    Node*temp= new Node();
    temp-> data= data;            //to be noted
    temp-> next=NULL;
    tail->next= temp;
    tail= temp;
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
    Node*first= new Node();
    first-> data= 10;
    // first-> next= NULL;
    Node*second= new Node();
    second->data= 20;
    second->next= NULL;
    first->next= second;

    //callin insertion at tail
    Node*tail= second; 
    insertAtTail(tail , 30);
    insertAtTail(tail , 40);
    insertAtTail(tail , 50);
    PrintList(first);
    return 0;
}