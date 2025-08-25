#include<iostream>                  //finding second largest element
using namespace std;
int largestElementIndex(int array[],int size){
    int max=INT8_MIN;                    //feature of c++ which assign minimum value which can be given to a variable 
    int maxindex=-1;
    for(int i=0;i<size;i++){
        if(array[i]>max){
            max=array[i];
            maxindex=i;
        }
    }
    return maxindex;
}
int main(){                           //this was an approach for solving the abover problem but its only applicable for
    int array[]={2,3,5,7,6,1};      // only when all elements are unique. you can check by dry run and repeat largest elem
    int indexoflargest=largestElementIndex(array,6);
    cout<<"first largest= "<<array[indexoflargest]<<endl;
    array[indexoflargest]=-1;
    int indexofsecondlargest=largestElementIndex(array,6);
    cout<<"second largest element is= "<<array[indexofsecondlargest];
    return 0;
}
//refer to next program for best approach