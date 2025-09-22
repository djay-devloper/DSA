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
        next= nullptr;
    }
};

 //Traversing ll
 void printList(Node* head) {
    Node* itr = head;
    while (itr != nullptr) {
        cout << itr->data << " -> ";
        itr = itr->next;
    }
    cout << "NULL" << endl;
}
int main(){
    //Node are just created at random memory.
    Node*n1= new Node(10);
    Node*n2= new Node(20);
    Node*n3= new Node(30);

    //Linking them
    n1->next= n2;
    n2->next= n3;
    printList(n1);  //Try putting n2 there.
    return 0;
}