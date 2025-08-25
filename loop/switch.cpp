#include<iostream>
using namespace std;
int main(){
    char op;
    int num1,num2;
    cout <<"enter operation :"<<endl;
    cin>>op;
    cout<<"enter two numbers"<<endl;
    cin>>num1;   // not taking two inputs at a time
    cin>>num2;
    switch(op){
    case '+':
    cout<<num1+num2<<endl;
    break;
     case '/':
    cout<<num1/num2<<endl;
    break;
    case '_':
    cout<<num1-num2<<endl;
    break;
    default :
    cout<<num1*num2<<endl;
    break;
    }
    return 0;
}