//Implementation using array not pointers.
#include<iostream>
#include<vector>
using namespace std;

void insertIntoMinHeap(vector<int> &heap, int key){
    //Initialy push at last
    heap.push_back(key);

    //Index of added node
    int i= heap.size()- 1;

    //comparison till root node
    while(i>0){
        int parent= (i-1)/2;
         if(heap[parent]> heap[i]){
            swap(heap[parent], heap[i]);
            i= parent;
         }else{
            break;
         }
    }
}
int main(){
    vector<int> heap;
    insertIntoMinHeap(heap, 5);
    insertIntoMinHeap(heap, 10);
    insertIntoMinHeap(heap, 15);
    insertIntoMinHeap(heap, 20);
    insertIntoMinHeap(heap, 30);
    insertIntoMinHeap(heap, 12);

    for(int x: heap){
        cout<<x<<" ";
    }
}
