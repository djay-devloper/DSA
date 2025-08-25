#include<iostream>  //rotating array by k steps where k>n is possible where n is size of array
using namespace std;
int main(){
    int array[6]={2,4,2,6,8,1};
    int ansarray[6]={};
    int size=6;
    int k,j=0;
    cout<<"enter value of k : ";
    cin>>k;
    k=k%size;                    //the rotation repeats itself after every complete cycle if k=14 then k%size gives k=2
    //inserting last k elements in ansarray
    for(int i=size-k;i<size;i++){
        ansarray[j++]=array[i];   
    }
    //inserting first n-k elements of array to ansarray
    for(int i=0;i<size-k;i++){
        ansarray[k+i]=array[i];
    }
    for (int i=0;i<size;i++){
         cout<<ansarray[i]<<"  ";
    }
    
    return 0;
}
//we are using a differenet memory as ansarray but for betterment we can use vector refer vector6.cpp