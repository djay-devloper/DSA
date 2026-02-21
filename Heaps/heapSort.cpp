#include<iostream>
using namespace std;

void heapify(int arr[], int n, int i){
    int largest= i;
    int left= 2*i+ 1;
    int right= 2*i+ 2;

    if(left<n && arr[left]> arr[largest]){
        largest= left;
    }

    if(right<n && arr[right]> arr[largest]){
        largest= right;
    }

    if(largest!= i){
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n){
    //Consider the given array a binomial heap and then make it a max heap.
    //Nodes from n/2 to n-1 are leaf node and they are already hepas. so we need to check from n/2-1 .
    for(int i=n/2 - 1; i>=0; i--){
        heapify(arr, n, i);
    }

    //Extracting the last and swapping with the max(root).
    for(int i= n-1; i>0; i--){
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    } 
}

int main(){
    int array[]= {4,10,3,5,1};
    heapSort(array, 5);

    for(int i= 0; i<5; i++){
        cout<<array[i]<<" ";
    }
    return 0;
}