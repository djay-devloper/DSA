#include<iostream>
using namespace std;
int sum_of_digits(int n){
    if(n>=0 && n<=9){
        return n;
    }
    return sum_of_digits(n/10) + n%10 ;
}
int main(){
    cout<<sum_of_digits(6538);
    return 0;
}