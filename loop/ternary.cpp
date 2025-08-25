#include <iostream>
using namespace std;
int main(){
    int marks;
    cout<<"enter marks :";
    cin>>marks;
    marks >= 33 ? cout<<"pass"<<endl:cout<<"fail"<<endl;
    if((marks%2==0)&&(marks%4==0)){ // (& | && ||)
        cout<<"divis. by 2and 4 :"<<endl;
    } 
return 0;
}
