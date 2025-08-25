#include<iostream>         //better version of arr9
#include<vector>
#include<algorithm>       //for std::reverse
using namespace std;
int main(){
    vector<int> v(5);
    int k;
    cout<<"enter value of k: ";
    cin>>k;
    cout<<"Enter elements : \n";
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    cout<<"vector is : ";
    for(int a:v){
        cout<<a<<"  ";
    }
    cout<<"\n";
     k=k%v.size();
    reverse(v.begin(),v.end());            //it will give 54321
    reverse(v.begin(),v.begin()+k);       //it will give 45321
    reverse(v.begin()+k,v.end());         //it will give 45123
     cout<<"rotated by k steps :";
    for(int a:v){                     //using for each loop 
        cout<<a<<" ";
    }
     return 0;
}