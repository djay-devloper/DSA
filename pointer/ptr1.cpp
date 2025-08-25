#include <iostream>
using namespace std;
int main(){
    int x=4;
    int*ptr=&x;
    cout<<"address of x= "<<&x<<endl;
    cout<<"value at x= "<<*ptr<<endl;
    //now changing data at x then dereferencing it again.
    x=23; //we can also write *ptr=23;
    cout<<"address of x= "<<&x<<endl;
    cout<<"value at x= "<<*ptr;
}