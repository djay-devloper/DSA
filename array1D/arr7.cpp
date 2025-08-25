#include<iostream>                  //finding second largest element in repeated case.
using namespace std;
int largestElementIndex(int array[],int size){
    int maxindex=-1;
    int max=INT8_MIN;                    
    for(int i=0;i<size;i++){
        if(array[i]>max){
            max=array[i];
            maxindex=i;
        }
    }
    return maxindex;
}
int main(){                  //but we are traversing the array three times so we need a better approach.look frwrd prgrm 
    int array[]={2,3,5,7,6,7};      
    int indexoflargest=largestElementIndex(array,6);
    int max=array[indexoflargest];
    for(int i=0;i<6;i++){
        if(array[i]==max){
           array[i]=-1;
        }
    }
    int indexofsecondlargest=largestElementIndex(array,6);
    cout<<"second largest element is= "<<array[indexofsecondlargest];
    return 0;
}
