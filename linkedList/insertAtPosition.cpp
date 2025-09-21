//Inserting at postion has only one case that it must has two side nodes.
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;

    Node(int data){
        this->data= data;
        next= nullptr;
    }
};
void printList(Node* &head){
    Node*itr= head;
    while(itr!= NULL){
        cout<<itr->data<<"->";
        itr= itr->next;
    }
    cout<<"NULL";
}
void insertAtPosition(Node* &head, int data, int k){
    Node*newNode= new Node(data);
    //iterating over (k-1)th node.
    Node* itr= head;
    int count= 1;
    while(count< k-1){
        itr= itr->next;
        count++;
    }
    //now itr pointing (k-1)th node
    Node*nextNode= itr->next;
    itr->next= newNode;
    newNode->next= nextNode;
}
int main(){
     //Node are just created at random memory.
    Node*n1= new Node(10);
    Node*n2= new Node(20);
    Node*n3= new Node(30);

    //Linking them
    n1->next= n2;
    n2->next= n3;
    insertAtPosition(n1, 25, 3);
    printList(n1);
    return 0;
}
//Also able to add at the tail. this glitch can be removed by an additional loop to find size of ll and
//implementing k<size at while loop.