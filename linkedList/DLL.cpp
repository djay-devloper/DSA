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

//traversing forward
void printListf(Node* head) {
    Node* itr = head;
    while (itr != nullptr) {
        cout << itr->data << " <-> ";
        itr = itr->next;
    }
    cout << "NULL" << endl;
}

//Traversing backward
void printListb(Node* &tail){
    Node*itr= tail;
    while(itr!=nullptr){
        cout<<itr->data<<" <-> ";
        itr= itr->prev;
    }
    cout<<"NULL"<<endl;
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
    printListf(n1);
    printListb(n3);
    return 0;
}