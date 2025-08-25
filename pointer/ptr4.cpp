//Array is a pointer
#include<iostream>
using namespace std;
void process(int *array,int n){
    for(int i=0;i<n;i++){
        cout<<*(array+i)<<endl;
        cout<<(array+i)<<endl;
    }
}
int main(){
    int arr[7]={3,4,8,2,9};
    process(arr,sizeof(arr)/sizeof(arr[0]));
    return 0;
}