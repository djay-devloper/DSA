#include<iostream>//sum of digits
using namespace std;
int main(){
    int n,sum=0;
    cout<<"enter number";
    cin>>n;
    while(n>0){
        int q=n%10;
        sum+=q;
        n=n/10;
    }
    cout<<sum;
    return 0;
}
