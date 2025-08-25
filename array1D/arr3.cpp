#include<iostream>                    //finding sum of all elements
using namespace std;
int main(){
    int array[]={1,4,6,3,5};
    int sum,max=array[0];
    int size=sizeof(array)/sizeof(array[0]);
    for(int idx=0;idx<size;idx++){
        sum+=(array[idx]);                   //not giving 19 here, but in onlinr compiler its right
    }
    cout<<sum<<endl;
    for(int idx=0;idx<5;idx++){
        if(array[idx]>max){                  //printing largest element
            max=array[idx];
        }
    }
    cout<<"largest element is : "<<max;
    return 0;
}