#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Function to print linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

// Function to insert node at given position (1-based index)
void insertAtKthPosition(Node*& head, int val, int k) {
    Node* newNode = new Node(val);

    // Insert at head if k == 1
    if (k == 1) {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* temp = head;
    int count = 1;

    // Traverse to (k-1)th node
    while (temp != NULL && count < k - 1) {
        temp = temp->next;
        count++;
    }

    // If position is out of bounds
    if (temp == NULL) {
        cout << "Position out of range!\n";
        delete newNode;
        return;
    }

    // Insert newNode at kth position
    newNode->next = temp->next;
    temp->next = newNode;
}

int main() {
    Node* head = NULL;

    // Create linked list manually
    head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    cout << "Original List: ";
    printList(head);

    int k = 3;  // position where we want to insert
    insertAtKthPosition(head, 99, k);

    cout << "After inserting 99 at position " << k << ": ";
    printList(head);

    return 0;
}
