#include<iostream>                   //checking if prefix sum is equals to suffix sum
#include<vector>
#include<algorithm>
using namespace std;
bool PrefixSuffix(vector<int>&v){
    int TotalSum=0;
    for(int i=0;i<v.size();i++){
       TotalSum+=v[i];
    }
    int PrefixSum=0,SuffixSum=0;
    for(int i=0;i<v.size();i++){
        PrefixSum+=v[i];
        SuffixSum=TotalSum-PrefixSum;
        if(PrefixSum==SuffixSum){
            return true;
        }
    }
    return false;
}
int main(){
    vector<int>v;
    for(int i=0;i<8;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    cout<<PrefixSuffix(v);
    return 0;
}