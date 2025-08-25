//print all the element of an array recursively from a given index
#include<iostream>
using namespace std;
void f(int*array, int idx, int n){
    //base case
    if(idx>=n){   //try == instead of >= and pass a parameter idx = 15 
        return ;
    }
    //self work
    cout<<array[idx]<<endl;
    //assumption
    f(array,idx+1,n);
}
int main(){
    int arr[5]={3,5,2,9,0};
    int size=sizeof(arr) / sizeof(arr[0]);
    f(arr,0,size);
    return 0;
}