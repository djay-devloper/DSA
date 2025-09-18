//Just creating the head of node of a linked list.
#include<iostream>
using namespace std;
//creating node class
class Node{
    public:
    int data;
    Node*next= NULL;

    //constructer to initialize node
    Node(int data ){
        this->data= data;
    }
};

 //Insert at Head of SLL.
 void insertAtHead(int d , Node* &head){
    //creating node
    Node*temp= new Node(d);
    temp->next= head;
    temp->data= d;
    head= temp;
 }

 //Traversing ll
 void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
int main(){
    //Single node hence already head node
    Node*n1= new Node(10);
    cout<<n1->data<<"  "<<n1->next<<endl;

    //inserting
    Node*head= n1;
    insertAtHead(20 , head);
    insertAtHead(30 , head);
    printList(head);
    return 0;
}