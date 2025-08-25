#include<iostream>
using namespace std;
int main(){
    int arr[] ={1,2,5,8};
    int arr2[5];
for(int idx=0;idx<=7;idx++){
cout<<arr[idx]<<"\n";
}
cout<<sizeof(arr);                 //no of elements
cout<<sizeof(arr)/sizeof(arr[0]);   //confusion
cout<<arr2;

return 0;
}