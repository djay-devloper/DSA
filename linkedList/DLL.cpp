//implementing DLL
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
//Traversing backward
void printList(Node* &tail){
    Node*itr= tail;
    while(itr!=nullptr){
        cout<<itr->data<<"->";
        itr= itr->prev;
    }
    cout<<"NULL";
}
int main(){
    Node*n1= new Node(10);
    Node*n2= new Node(20);
    Node*n3= new Node(30);

    //connecting
    n1->next= n2;
    n2->prev= n1;
    n2->next= n3;
    n3->prev= n2;
    printList(n3);
    return 0;
}