#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    cout<<"MATRIX 1 :"<<endl;
    int r1,c1;
    cin>>r1>>c1;
    int mat1[r1][c1];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cout<<"entry for coordinate "<<i<<","<<j<<" :";
            cin>>mat1[i][j];
        }
    }
    //printing matrix 1
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cout<<mat1[i][j]<<"  ";
        }
        cout<<endl;
    }
    cout<<"MATRIX 2 :"<<endl;
    int r2,c2;
    cin>>r2>>c2;
    int mat2[r2][c2];
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
             cout<<"entry for coordinate "<<i<<","<<j<<" :";
            cin>>mat2[i][j];
        }
    }
    //printing matrix 2
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cout<<mat2[i][j]<<"  ";
        }
        cout<<endl;
    }
    if(c1==r2){
    int mat3[r1][c2];
    for(int i=0;i<r1;i++){            //constructing row of mat3 i.e r1
        for(int j=0;j<c2;j++){       //constructing column of mat3 i.e c2
            int value=0;
            for(int k=0;k<r2;k++){              //k for traversing
                value+=mat1[i][k]*mat2[k][j];   //row of mat1 and column of mat2 are fixed. it is main logic
            }
            mat3[i][j]=value;
        }
    }
    cout<<"Matrix after multiplication"<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<mat3[i][j]<<"  ";
        }
        cout<<endl;
    }
    }
    else
    cout<<"c1 is not equal to r2 ";
    return 0;
    }