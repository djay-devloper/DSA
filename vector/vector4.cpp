#include<iostream>           //finding difference of sum of elements at odd and even position
using namespace std;         //by only declaring one variable
int main(){
    int sum=0;
    int array[]={2,5,7,2,1};
    for(int i=0;i<5;i++){
        if(i%2==0){
            sum+=array[i];
        }
        else
            sum-=array[i];
    }
    cout<<sum;
    return 0;
}