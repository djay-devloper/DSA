#include<iostream>
using namespace std;
int main(){
    int i,j,m,n;
    cout<<"enter rows"<<endl;
    cin>>m;
    cout<<"enter column"<<endl;
    cin>>n;
    for(i=1;i<=m;i++){
        for(j=1;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
return 0;
}