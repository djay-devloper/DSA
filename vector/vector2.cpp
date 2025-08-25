#include<iostream>                 //finding last occurance in vector
#include<vector>
using namespace std;
int main(){
    vector<int> v(6);
    cout<<"enter element"<<endl;
    for(int i=0;i<6;i++){
        cin>>v[i];
    }
    int element;
    cout<<"enter element to be searched : ";
    cin>>element;
    int occurance=-1;
   /*for(int i=0;i<v.size();i++){
        if(v[i]==element){                    //traversing from starting 
            occurance=i;
        }
    }*/
    for(int i=v.size()-1;i>=0;i--){
        if(v[i]==element){
            occurance=i;                    //traversing from last element. Reduces time complexcity break is used
            break;                          //so that when element found then no more searching.                    
        }
    }
     cout<<"found at index : "<<occurance<<endl;
     cout<<"enter the repeated number : ";
     int count=0,match;
     cin>>match;
     for(int i=0;i<v.size();i++){                    // frequency of a specific element
         if(v[i]==match){
            count+=1;
         }    
     }
     cout<<match<<" is repeated "<<count<<" times";
    return 0;
}