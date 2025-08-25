#include<iostream>          //findig out unique number of array. we can do it by simple comparison 
#include<array>             //but we are manipulating our array
#include<vector>
using namespace std;
int main(){
int array[10]={3,4,1,4,5,3,6};
int size=8;
for(int i=0;i<size;i++){
    for(int j=i+1;j<size;j++){
        if(array[i]==array[j]){
            array[i]=array[j]=-1;
        }
    }
}
cout<<"unique numbers are: "<<endl;
for(int i=0;i<size;i++){
    if(array[i]>0){
         cout<<array[i]<<endl;
    }
}
cout<<"final array : "<<array;      //printing address of array 
    return 0;
}