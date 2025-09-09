#include<iostream>
using namespace std;
int fncn(int*array, int size, int key){
    int low= 0;
    int high= size-1;
    int mid= (low+high)/2;
    while(low<=high){
        if(key==array[mid]){
            return mid;
        }
        if(key>array[mid]){
            low= mid+1;
        }
        else 
        high= mid-1;
        mid=(low+high)/2;
    }
    return -1;
}
int main(){
    int even[]= {2,4,6,8,10,12};
    int odd[]= {1,3,5,7,9,11};
    cout<<fncn(even, 6, 10);
    return 0;
}