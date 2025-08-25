#include<iostream>
using namespace std ;
void merge(int arr[] , int l , int mid , int r){
    int an = mid-l+1 , bn = r-mid ;
    int a[an] , b[bn] ;
    //Stores first half sorted array. its temporary 
    for(int i=0 ; i<an ; i++){
        a[i] = arr[l+i];
    }
    //Stores second half sorted array.
    for(int i=0 ; i<bn ; i++){
        b[i] = arr[mid+1+i] ;
    }
    int i=0 , j=0 , k=l;
    while(i<an && j<bn){
        if(a[i] <= b[j]){
            arr[k++] = a[i++] ;
        }    
        else
            arr[k++] = b[j++] ;
    }
    while(i<an){
        arr[k++] = a[i++] ;
    }
    while(j<bn){
        arr[k++] = b[j++] ;
    }
}
void mergeSort(int arr[] , int l , int r){
    if(l>=r){
        return ;
    }
    int mid = (l+r)/2 ;
    //for first half
    mergeSort(arr , l , mid) ;
    //for second half 
    mergeSort(arr , mid+1 , r) ;
    //compares and merge two elements
    merge(arr , l , mid , r) ;
}
int main(){
    int array[] = {10,28,24,6,34,18,38,44} ;
    int n =sizeof(array)/sizeof(array[0]) ;
    mergeSort(array , 0 , n-1) ;
    for(int i=0 ; i<n ; i++){
        cout<<array[i]<<"\n" ;
    }
    return 0 ;
}