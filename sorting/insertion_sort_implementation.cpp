#include<iostream>
#include<vector>
using namespace std ;
void insertionSort(vector <int> &v){
    int n = v.size() ;
    for(int i =1 ; i<n ; i++){
        //declaring first element of unsorted array.
        int current_ele = v[i] ;
        //declaring last element of sorted array
        int j=i-1 ;
        //finding element less than current element.
        while(j>=0 && v[j] > current_ele){
            v[j+1] = v[j] ;
            j-- ;
        }
        v[j+1] = current_ele ;
    }
    return ;
}
int main(){
    int n ;
    cin>>n;
    vector <int> v(n) ;
    for(int i=0 ; i<n ; i++){
        cin>>v[i] ;
    }
    cout<<"Sorted array";
    insertionSort(v) ;
    for(int i=0 ; i<n ; i++){
        cout<<v[i]<<"\n" ;
    }
}