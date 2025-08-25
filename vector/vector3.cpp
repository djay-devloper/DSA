#include<iostream>            //checking if array is sorted or not
#include<vector>
using namespace std;
int main(){
    int array[]={1,2,3,4,5};
    bool sortedflag=true;
    for(int i=0;i<4;i++){
       if(array[i]>array[i+1]){
        sortedflag=false;
       } 
    }
    cout<<sortedflag;
    return 0;
}