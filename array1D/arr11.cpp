#include<iostream>                        //sorting binary number consisting of only 0 and 1
#include<vector>
using namespace std;
void sortZerosAndOne(vector<int>&v){      //passing vector by referenece has its own advantage
    int count_zeroes=0;
    for(int ele:v){
        if(ele==0){
            count_zeroes++;
        }
     }
     for(int i=0;i<v.size();i++){
         if(i<count_zeroes){
            v[i]=0;
         }
         else
         v[i]=1;
     }
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
    //for reducing time complexcity and using two pointers look at next program.