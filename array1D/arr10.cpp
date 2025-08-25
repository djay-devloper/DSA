#include<iostream>     //given Q queries. check if the giiven elements are presents in array
#include<vector>       //note:- the value of all elements in array is less than 10 to the power 5
#include<algorithm>
using namespace std;    
int main(){
int n;
cout<<"enter size : ";
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
const int N=1e5+10;        //way of writing 10 raise to the power 5
vector<int>count(N,0);     //vector size 'N=10^5' and all index containing value '0'
for(int i=0;i<n;i++){      
count[v[i]]++;
   }
/*explanation:-
v={3,2,3,2,3,5}
count[v[0]]=count[3]++ which means 3 has been counted 1 time till now.
count[v[1]]=count[2]++
count[v[2]]=count[3]++ which means 3 counted 2 times till now.
and so on.
*/
cout<<"enter no. of query element : ";
int q;
cin>>q;
while(q--){
      int queryelement;
      cin>>queryelement;
      cout<<count[queryelement]<<endl;
}
    return 0;
}