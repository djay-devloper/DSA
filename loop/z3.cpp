#include<iostream>
using namespace std;
int main(){
    int n,r=0;
    cout<<"enter number";
    cin>>n;
    while(n>0){
        int b=n%10;//reverse
        r=r*10+b;
        n=n/10;
    }
    cout<<r;
    return 0;
}