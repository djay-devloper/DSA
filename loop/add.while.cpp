#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cin>>num1>>num2;
    int sum=num1+num2;
    cout<<"the sum is: "<<sum<<endl;
    int a=4,b=8;
    cout<<(a++)<<endl;
    cout<<(++a)<<endl;
    cout<<(a==b)<<endl;
    int p=1;
    while(p<4){
    cout<<'*'<<endl;
    p++;
    }
return 0;
}