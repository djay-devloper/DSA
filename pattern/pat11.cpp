#include <iostream>
using namespace std;
int main(){
    int n=5;
    for(int line=0;line<n;line++){
        //Aproch is giving condition to only where is character to be print
        for(int j=0;j<n;j++){
            if(j==n/2){   //for column number three
                cout<<"*";
            }
            else if(line==n/2){ //for row number three
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}