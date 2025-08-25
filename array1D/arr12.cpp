#include<iostream>
#include<vector>
using namespace std;
void sortZerosAndOne(vector<int>&v){
     int left_ptr=0,right_ptr=v.size()-1;
     while(left_ptr<right_ptr){
        if(v[left_ptr]==1 && v[right_ptr]==0){
           v[left_ptr++]=0;
           v[right_ptr--]=1;
        }
        if(v[left_ptr]==0){
            left_ptr++;
        }
        if(v[right_ptr]==1){
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
    sortZerosAndOne(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}