#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int d) {
        data = d;
        next = nullptr;
    }
};

Node* tail = nullptr;   // using tail pointer
int size = 0;

void insert(int data, int k) {
    if (k < 1 || k > size + 1) {
        cout << "Invalid Position.. " << endl;
        return;
    }
    Node* newNode = new Node(data);

    // Case-1 : Empty List
    if (!tail) {
        tail = newNode;
        tail->next = tail;
        size++;
        return;
    }

    // Case-2 : At head
    if (k == 1) {
        newNode->next = tail->next;
        tail->next = newNode;
        size++;
        return;
    }

    // Case-3 : At tail
    if (k == size + 1) {
        newNode->next = tail->next;
        tail->next = newNode;
        tail = newNode;
        size++;
        return;
    }

    // Case-4 : Other positions
    Node* itr = tail->next;
    for (int count = 0; count < k - 2; count++) {
        itr = itr->next;
    }
    newNode->next = itr->next;
    itr->next = newNode;
    size++;
}

void deletion(int k) {
    if (!tail) {
        cout << "Empty List.." << endl;
        return;
    }
    if (k < 1 || k > size) {
        cout << "Invalid Node.." << endl;
        return;
    }

    // Case-1 : one node only
    if (size == 1) {
        delete tail;
        tail = nullptr;
        size--;
        return;
    }

    // Case-2 : Deleting head
    if (k == 1) {
        Node* temp = tail->next;
        tail->next = temp->next;
        delete temp;
        size--;
        return;
    }

    // Case-3 : Deleting tail
    if (k == size) {
        Node* itr = tail->next;
        while (itr->next != tail) {
            itr = itr->next;
        }
        Node* temp = tail;
        itr->next = tail->next;
        tail = itr;
        delete temp;
        size--;
        return;
    }

    // Case-4 : Deleting middle
    Node* itr = tail->next;
    for (int count = 0; count < k - 2; count++) {
        itr = itr->next;
    }
    Node* temp = itr->next;
    itr->next = temp->next;
    delete temp;
    size--;
}

void printList() {
    if (!tail) {
        cout << "List is empty" << endl;
        return;
    }
    Node* itr = tail->next;
    do {
        cout << itr->data << "->";
        itr = itr->next;
    } while (itr != tail->next);
    cout << "(head)" << endl;
    cout << "Size: " << size << endl;
}

int main() {
    insert(3, 1);
    insert(4, 2);
    insert(5, 2);
    insert(6, 3);
    printList();

    deletion(1);  // delete head
    printList();

    deletion(size);  // delete tail
    printList();

    deletion(2);  // delete middle
    printList();

    return 0;
}
