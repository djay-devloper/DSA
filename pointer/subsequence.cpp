// finding power set of the set 
#include<iostream>
#include<vector>
#include<string>
using namespace std;
void f(string &str , int i , string result , vector<string> &li){
    if(i==str.length()){
        //when a subsequence found then appended to li. 
        li.push_back(result) ;
        return ;
    }
    //include current character
    f(str , i+1 , result + str[i] , li) ;

    //exclude current character
    f(str , i+1 , result , li) ;
}
int main(){
    vector<string> res ; 
    string check = "abc" ;
    f(check , 0 , "" , res ) ;
    for(int i =0 ; i < res.size() ; i++){
        cout<<res[i] <<"\n";
    }
    return 0;
}