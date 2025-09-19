// Delete from Head (first node)
// Just move head to the next node and free the old head.

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int val) { data = val; next = NULL; }
};

void insertAtEnd(Node* &head, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) { head = newNode; return; }
    Node* temp = head;
    while (temp->next != NULL) temp = temp->next;
    temp->next = newNode;
}

void printList(Node* head) {
    while (head != NULL) { cout << head->data << " -> "; head = head->next; }
    cout << "NULL\n";
}

void deleteHead(Node* &head) {
    if (head == NULL) return;
    Node* temp = head;
    head = head->next;
    delete temp;
}

int main() {
    Node* head = NULL;
    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);

    cout << "Before Deletion: ";
    printList(head);

    deleteHead(head);

    cout << "After Deletion (Head): ";
    printList(head);
}
