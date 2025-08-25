#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter rows and column";
    cin>>m;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=m;j++){
            cout<<j;
        }
        for(int j=1;j<=(i-1);j++){
            cout<<j;
        }
        cout<<endl;
    }
return 0;
}