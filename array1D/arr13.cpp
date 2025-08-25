#include<iostream>              //sorting an array with all even integers in begining and followed by odd numbers.
#include<vector>                //order among all even or odd no. does not matter
using namespace std;
void sorting(vector<int>&v){
    int left_ptr=0,right_ptr=v.size()-1;
    while(left_ptr<right_ptr){
        if(v[left_ptr]%2!=0 && v[right_ptr]%2==0){
            int temp;
            temp=v[right_ptr];
            v[right_ptr]=v[left_ptr];
            v[left_ptr]=temp;
            left_ptr++,right_ptr++;
            }
        if(v[left_ptr]%2==0){
               left_ptr++;
           }
        if(v[right_ptr]%2!=0){
            right_ptr--;
        }   
    }
    return;
}
int main(){
     int size;
    cout<<"Enter size : ";
    cin>>size;
     vector<int>v;
    for(int i=0;i<size;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    sorting(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}