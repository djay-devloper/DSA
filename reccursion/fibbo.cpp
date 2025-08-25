#include<iostream>
using namespace std;
int fibbo(int n){
    //base case 
    if(n==0 or n==1){
        return n;
    }
    return fibbo(n-1)+fibbo(n-2);
}
int main(){
    cout<<fibbo(6);
    return 0;
}