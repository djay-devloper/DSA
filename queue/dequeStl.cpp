#include<iostream>
#include<queue>    //or #include<deque>
using namespace std;
int main(){
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    d.push_front(3);
    cout<<d.front()<<endl;
    d.push_front(4);
    cout<<d.front()<<endl;
    d.pop_front();
    cout<<d.front()<<endl;
    return 0;
}