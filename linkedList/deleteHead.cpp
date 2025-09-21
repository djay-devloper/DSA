// Delete from Head (first node). two cases if only one node or many nodes
// Just move head to the next node and free the old head.

#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;

    Node(int val) { data = val; next = NULL; }
};

void printList(Node* head) {
    while (head != NULL) { cout << head->data << " -> "; head = head->next; }
    cout << "NULL\n"<<endl;
}

void deleteHead(Node* &head) {
    Node*temp= head;
    head= head->next; //think for only one node wala case.
    delete temp;
    cout<<"Head deleted.. "<<endl;
}

int main() {
    Node*n1= new Node(10);
    Node*n2= new Node(20);
    Node*n3= new Node(30);

    //Linking them
    n1->next= n2;
    n2->next= n3;
    Node*head= n1;
    printList(head);
    deleteHead(head);
    printList(head);
    deleteHead(head);
    printList(head);
    deleteHead(head);

    return 0;
}
