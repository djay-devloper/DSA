#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int d){
        data= d;
        prev= nullptr;
        next= nullptr;
    }
};
Node*tail= nullptr;
int size= 0;

void insertion(int d, int k){
    if(k<1 || k>size+1){cout<<"Invalid Node..... "<<endl; return;}
    Node*newNode= new Node(d);

    //Case-1 : Empty list
    if(!tail){
        newNode->next= newNode;
        newNode->prev= newNode;
        tail= newNode;
        size++;
        return;
    }

    //Case-2 : At head, at least one node is present.
    if(k==1){
        newNode->next= tail->next;
        tail->next->prev= newNode;
        newNode->prev= tail;
        tail->next= newNode;
        size++;
        return;
    }

    //Case-3 : At tail, at least one node is present.
    if(k== size+1){
        newNode->next= tail->next;
        tail->next->prev= newNode;
        tail->next= newNode;
        newNode->prev= tail;
        tail= newNode;
        size++;
        return;
    }
    
    //Case-4 : At any other position, at least three nodes.
    Node*itr= tail->next;
    int count= 0;
    while(count< k-2){
        itr= itr->next;
        count++;
    }

    Node*temp= itr->next;
    itr->next= newNode;
    newNode->prev= itr;
    newNode->next= temp;
    temp->prev= newNode;
    size++;
    return;

}

void deletion(int k){
    if(k < 1 || k > size || !tail){
        cout << "Invalid position or empty list!" << endl;
        return;
    }

    Node* toDelete;

    // Case-1: Only one node
    if(size == 1){
        toDelete = tail;
        tail = nullptr;
        delete toDelete;
        size--;
        return;
    }

    // Case-2: Delete head (k == 1)
    if(k == 1){
        toDelete = tail->next;          // head node
        tail->next = toDelete->next;
        toDelete->next->prev = tail;
        delete toDelete;
        size--;
        return;
    }

    // Case-3: Delete tail (k == size)
    if(k == size){
        toDelete = tail;
        tail->prev->next = tail->next;
        tail->next->prev = tail->prev;
        tail = tail->prev;
        delete toDelete;
        size--;
        return;
    }

    // Case-4: Delete middle node
    Node* itr = tail->next;
    for(int i=1; i<k; i++){
        itr = itr->next;
    }

    toDelete = itr;
    toDelete->prev->next = toDelete->next;
    toDelete->next->prev = toDelete->prev;
    delete toDelete;
    size--;
}


void printList(){
    Node*itr= tail->next;
    do{
        cout<<itr->data<<"->";
        itr= itr->next;
    }while(itr!= tail->next);
    cout<<"Goes to head"<<endl;
    cout<<"Size of list.. "<<size<<endl;
}

int main(){
    insertion(2,1);
    insertion(1,1);
    insertion(3,3);
    insertion(50,2);
    printList();
    return 0;
}