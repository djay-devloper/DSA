#include<iostream>        //printing square of natural number upto n
using namespace std;   
int sqr(int x){
return x*x;

}
int main(){
int n;
cout<<"enter value of n upto which square is needed:  ";
cin>>n;
for(int i=1;i<=n;i++){
    sqr(i);
    cout<<sqr(i)<<endl;
}
return 0;
}