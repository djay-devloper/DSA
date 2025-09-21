// Delete at Given Position (kth node)
// must have two nodes by side. otherwise cases of head and tail will be aplied.
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
    cout << "NULL\n";
}

void deleteAtPosition(Node* &head, int position){
    //iterating to position-1 node.
    Node*itr= head;
    int count= 1;
    while(count< position-1){
        itr= itr->next;
        count++;
    }
    Node*temp= itr->next;
    itr->next= itr->next->next;
    delete temp; 
    cout<<"Deleted "<<position<<"th Node"<<endl;
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
    deleteAtPosition(head, 2);
    printList(head);
}
