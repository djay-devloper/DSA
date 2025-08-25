#include<iostream>
#include<array>
using namespace std ;
int bubble_sort(int *arr , int size){
    for(int i=0 ; i<(size-1) ; i++){
       // bool flag = false ;
        for(int j=0 ;j<(size-i-1) ; j++){
            if(arr[j]>arr[j+1]){
                //flag = true ;          //if no swapping takes place in a pass it means array is sorted there.so break loop.
                int key =arr[j+1];       //It is the case of nearly sorted array.
                arr[j+1] = arr[j];
                arr[j] = key;
            }
        }
       // if(!flag){
       //     break ;
       // } 
    }
}
int main(){
    int array[5] = {20,50,40,10,30};
    bubble_sort(array , 5);
    for(int i=0 ; i<5 ;i++){
        cout<<array[i]<<"\n";
    }
    return 0;
}