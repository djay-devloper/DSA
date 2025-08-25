#include<iostream>
using namespace std;
int add(int num1,int num2){
    int sum=num1+num2;
    return sum;
}
    int add(int num1,int num2,int num3){  //name and data type can be same but no. of parameters makes it diff. funcn
        int sum=num1+num2+num3;
        return sum;
    }
    char welcome(char par){
         cout<<"hello"<<par;
         return 0;
    }
int main(){
    int a=2;
    int b=3;
    int c=5;
    char name;
   cout<< add(a,b,c)<<"\n";
   cout<< add(a,b)<<"\n";
   cout<<"enter ur name :";
   cin>>name;
   cout<<welcome(name);
   return 0;
}