#include<iostream>             //we used *bla_bla everyehere in place of using simple variable,which means we just dereferenced
using namespace std;           //evrything and does not created any copy in function
void swap(int*x,int*y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
int main(){
    int x=10;
    int y=20;
    int*p1=&x;
    int*p2=&y;
    cout<<&p1<<","<<&p2<<endl;
    swap(p1,p2);
    cout<<&p1<<","<<&p2<<endl;
    cout<<x<<","<<y;
    return 0;
}