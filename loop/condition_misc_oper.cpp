#include<iostream>
using namespace std;
int main(){
    cout<<"Enter two age :";
    int a,b,max;
    cin>>a;
    cin>>b;
    a>b ? max=a:max=b;
cout<<"max age is: "<<max;
return 0;
}