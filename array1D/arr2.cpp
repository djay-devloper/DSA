#include<iostream>
using namespace std;
int main(){
    int arr[5],sum;
    cout<<"enter elements : ";
    for(int idx=0;idx<5;idx++){         //taking input using for loop
       cin>> arr[idx];
    }
     cout<<"array is : ";
    for(int idx=0;idx<5;idx++){
        cout<<arr[idx]<<endl;
    }
return 0;
}