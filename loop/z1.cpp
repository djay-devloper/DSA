#include<iostream>                               //counting number of digits in a number
using namespace std;
int main(){
    int n,digits=0;
    cout<<"enter number"<<endl;
    cin>>n;
    while(n>0){
        digits++;
        n=n/10;
        }
         cout<<digits;
   return 0;
}