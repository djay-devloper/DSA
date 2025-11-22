// similar to the vector class.
#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int>q;
    q.push(1);
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    q.push(2);
    q.push(3);
    q.pop();
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    q.pop();
    q.pop();

    // Accessing front() or back() on an empty queue is undefined behavior.
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    return 0;
}