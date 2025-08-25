#include<iostream>// find sum of following series=>  1-2+3-4+5.....n
using namespace std;
int main(){
int n,sum=0;
cout<<"enter value of n= ";
cin>>n;
for(int i=1;i<=n;i++){
if(i%2==0){
    sum=sum-i;
}
else{
    sum=sum+i;
}
}
cout<<sum;
return 0;
}