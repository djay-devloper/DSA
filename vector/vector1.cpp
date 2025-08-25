#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v;
    //vector<int>v[5];                      try this
    for(int idx=0;idx<5;idx++){
        int element;
        cout<<"enter "<<idx<<"th element"<<endl;
        cin>>element;
       // cin>>v[idx];
        v.push_back(element);
    }
    cout<<"vector is : "<<endl;
    for(int idx=0;idx<5;idx++){
        cout<<v[idx]<<" ";
    }
    //for each loop
    for(int ele:v){
    cout<<ele;
    }
    v.insert(v.begin()+2,0);
    v.erase(v.begin()+1);
    // while loop
    int idx=0;
    while(idx<v.size()){
        cout<<v[idx++];
    }
    return 0;
    }