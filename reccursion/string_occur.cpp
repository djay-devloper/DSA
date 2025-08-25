//removing a from string "abcax" an returning new string free from 'a' .
#include<iostream>
#include<cstring>
using namespace std;
string f(string &s, int idx, int n){    //A reference to input string s to avoid copying
    if(idx==n)
    return "";
    string curr="";
    curr+=s[idx];
    return((s[idx]=='a')? "" : curr) + f(s, idx+1, n);
}
int main(){
    string s="abcax";
    int n=s.length();
    cout<<f(s, 0, n);
    return 0;
}