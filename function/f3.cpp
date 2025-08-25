#include <iostream>           //printing all prime from a to b given numbers
using namespace std;
int prime(int num){
for(int i=2;i<num;i++){
    if(num%i==0){
      return false;
    }
}
    return true;
return 0;
}
int main(){
    for(int i=2;i<=10;i++){
        if(prime(i)){
            cout<<i<<endl;
        }
    }
return 0;
}