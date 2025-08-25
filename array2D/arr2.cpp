#include<iostream>                           //transpose of a matrix
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int r1,c1;
    cout<<"Enter Row and Column Of Matrix : "<<endl;
    cin>>r1>>c1;
    int mat[r1][c1];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cout<<"Entry for Coordinate "<<i<<","<<j<<":  ";
            cin>>mat[i][j];
        }
    }
    cout<<"Original Matrix is : "<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    int transpose[c1][r1];
    for(int i=0;i<c1;i++){
        for(int j=0;j<r1;j++){
            transpose[i][j]=mat[j][i];
        }
    }
     for(int i=0;i<c1;i++){
        for(int j=0;j<r1;j++){
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}