#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    cout<<"size is : "<<v.size()<<endl;
    cout<<"capacity is : "<<v.capacity()<<endl;
    v.push_back(1);
     cout<<"sise is : "<<v.size()<<endl;
    cout<<"capacity is : "<<v.capacity()<<endl;
    v.push_back(5);
    cout<<"sise is : "<<v.size()<<endl;
    cout<<"capacity is : "<<v.capacity()<<endl;
     v.push_back(8);
      cout<<"sise is : "<<v.size()<<endl;
    cout<<"capacity is : "<<v.capacity()<<endl;
    v.pop_back();
 cout<<"sise is : "<<v.size()<<endl;
    cout<<"capacity is : "<<v.capacity()<<endl;
    cout<<v[2];
    return 0;
}