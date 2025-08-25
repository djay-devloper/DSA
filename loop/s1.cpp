#include<iostream>
using namespace std;
int main(){
    int i=1,table=0;
 while(true){
    table=i*5;
    if(table %7==0){
    cout<<table;
    break;
    }
    i++;
    }
return 0;
}