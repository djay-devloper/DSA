#include<iostream>
#include<vector>
using namespace std;

void heapifyDown(vector<int> &heap, int i){
    int n= heap.size();
    
    while(true){
        int left= 2*i + 1;
        int right= 2*i + 2;
        int smallest= i;

        if(left<n && heap[left]< heap[smallest]){
            smallest=left;
        }
                                                  //checking which children is samllest where i is parent.
        if(right<n && heap[right]< heap[smallest]){
            smallest= right;
        }

        if(smallest!= i){
            swap(heap[i], heap[smallest]);
            i= smallest;
        }else{
            break;
        }
    }
}

void deleteRoot(vector<int> &heap){
    int n= heap.size();
    //if heap is empty
    if(n==0){return;}

    // Swapping the last element with root node and deleting last node.
    heap[0]= heap[n-1];
    heap.pop_back();

    //fixing heap prpperty.
    heapifyDown(heap, 0);

}
int main(){
    vector<int> heap;
    heap.push_back(10);
    heap.push_back(20);
    heap.push_back(30);
    heap.push_back(40);
    heap.push_back(50);

    deleteRoot(heap);
    for(int x: heap){
        cout<<x<<" ";
    }
    return 0;
}
