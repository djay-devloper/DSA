#include<iostream>
using namespace std;
int f(int*array, int n, int i){
    //base case
    if(i==n-1)return 0;
    if(i==n-2)return f(array, n, i+1) + abs(array[i]-array[i+1]);
    //self work
    return min(f(array, n, i+1) + abs(array[i]-array[i+1]) , f(array, n, i+2) + abs(array[i]-array[i+2]));

}
int main(){
    int arr[]={10,30,40,20};
    cout<<f(arr,4,2);
    return 0;
}