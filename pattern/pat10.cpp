#include<iostream>
using namespace std;
int main(){
    int n=5;
     //for upper triangle
    for(int line=1;line<=n;line++){
        //for printing no of spaces
        int no_of_spaces=(n-line);
        for(int j=0;j<(no_of_spaces);j++){
            cout<<" ";
        }
        //for no of characters
        int no_of_char=(2*line-1);
        for(int j=0;j<no_of_char;j++){
            cout<<(char)('A'+j);
        }
        cout<<"\n";
    } 
    //for lower triangle
    for(int line=n+1;line<=(2*n-1);line++){
        int no_of_spaces2=(line-n);
        for(int s=0;s<no_of_spaces2;s++){
            cout<<" ";
        }
        int no_of_char2=(2*(2*n-line)-1);
        for(int t=0;t<no_of_char2;t++){
            cout<<char('A'+t);
            }  
            cout<<endl;
    }        
    return 0;
}