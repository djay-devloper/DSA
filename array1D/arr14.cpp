#include<iostream>                              //prefix sum problem
#include<vector>
#include<algorithm>
using namespace std;
void RunningSum(vector<int>&v){
    for(int i=1;i<v.size();i++){        //starting from i=1 to avoid v[-1] case in for loop
        v[i]+=v[i-1];
    }
    return;
}
int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
RunningSum(v);
cout<<"sorted array : "<<endl;
for(int i=0;i<v.size();i++){
    cout<<v[i]<<"  ";
}
    return 0;
}