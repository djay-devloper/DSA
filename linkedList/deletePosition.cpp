// Delete at Given Position (kth node)
// If k == 1, it’s the head deletion.
// Otherwise, move to (k-1)th node, and unlink kth node.
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

void deleteAtPosition(Node* &head, int pos) {
    if (head == NULL) return;
    if (pos == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }
    Node* temp = head;
    for (int i = 1; temp != NULL && i < pos-1; i++) temp = temp->next;
    if (temp == NULL || temp->next == NULL) return;
    Node* nodeToDelete = temp->next;
    temp->next = temp->next->next;
    delete nodeToDelete;
}

int main() {
    Node* head = NULL;
    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);
    insertAtEnd(head, 40);

    cout << "Before Deletion: ";
    printList(head);

    deleteAtPosition(head, 3); // delete 3rd node

    cout << "After Deletion (Position 3): ";
    printList(head);
}
