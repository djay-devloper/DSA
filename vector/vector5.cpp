#include<iostream>           //finding total number of pairs of a target sum
#include<vector>
using namespace std;
int main(){
    int array[10],size;
    cout<<"enter size : ";
    cin>>size;
    cout<<"enter elements : "<<endl;
    for(int i= 0;i<size;i++){
        cin>>array[i];
    }
    int sum_of_pairs,no_of_pairs=0;
    cout<<"enter pair sum : ";
    cin>>sum_of_pairs;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){              //for idx 2 we need to check only idx 3,4,5.... not 0,1
            if(array[i]+array[j]==sum_of_pairs){
            no_of_pairs+=1;
            }                                    //for checking triplets create one more loop inside j like (intk=j+1)
        }
    }
    cout<<"total no of pair is: "<<no_of_pairs;
    return 0;
}