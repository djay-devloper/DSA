// Delete from Tail (last node)
// Traverse until the second last node, make its next = NULL, and delete the last node.

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

void deleteTail(Node* &head) {
    if (head == NULL) return;
    if (head->next == NULL) { delete head; head = NULL; return; }
    Node* temp = head;
    while (temp->next->next != NULL) temp = temp->next;
    delete temp->next;
    temp->next = NULL;
}

int main() {
    Node* head = NULL;
    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);

    cout << "Before Deletion: ";
    printList(head);

    deleteTail(head);

    cout << "After Deletion (Tail): ";
    printList(head);
}
