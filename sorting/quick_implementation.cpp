#include<iostream>
using namespace std ;
int partition(int arr[] , int first , int last){
    int pivot = arr[last] ; 
    int i = first-1 ; //for inserting elements < pivot
    int j = first ;//for finding elements < pivot
    for(; j<last ; j++){
        if(arr[j] < pivot){
            i++ ;
            swap(arr[i] , arr[j]) ;
        }
    }
    //now i is pointing to the last element < pivot
    //correct position for pivot will be-> i+1
    swap(arr[i+1] , arr[last]) ; 
    return i+1 ;
}
void quick_sort(int arr[] , int first , int last){
    //base case
    if(first>=last){
        return ;
    }
    int pi = partition(arr , first , last) ;
    quick_sort(arr , first , pi-1) ; //recursive case
    quick_sort(arr , pi+1 , last) ;
}
int main(){
    int array[] = {20, 12, 16, 18, 30, 35} ;
    int n = sizeof(array)/sizeof(array[0]) ;
    quick_sort(array, 0, n-1) ;
    for(int i=0 ; i<n ; i++){
        cout<<array[i]<<endl ;
    }
} 