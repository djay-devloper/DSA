#include<iostream>         //printing all odd number between two numbers
using namespace std;
int odd_no(int a, int b){
    for(int i=a;i<=b;i++){
        if(i%2!=0){
            cout<<i<<endl;
            }
            else
            cout<<"";
        }
}
int main(){
    int x=5;
    int y=19;
    odd_no(x,y);
    return 0;
}