#include<iostream>      //traversing only two times
using namespace std;
int secondmaxelmnt(int array[],int size){
    int firstmax=INT8_MIN;
    int secondmax=INT8_MIN;
    for(int i=0;i<size;i++){
        if(array[i]>firstmax){
           firstmax=array[i];
        }
    }
    for(int i=0;i<size;i++){
        if(array[i]>secondmax && array[i]!=firstmax){
            secondmax=array[i];
        }
    }
    return secondmax;
}
int main(){
    int array[]={1,3,4,2,7,6,4,7};
    cout<<secondmaxelmnt(array,8)<<" is the second max element";
    return 0;
}