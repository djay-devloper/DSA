#include<iostream>
using namespace std;

//A node is needed
class Node{
    public:
    int data;
    Node*next;

    Node(int value){
        data= value;
        next= nullptr;
    }
};

//Orginal stack class
class Stack{
    private:
    Node*topNode;
    int count; 

    public:
    Stack(){
        topNode= nullptr;
        count= 0;
    }

    // N1<- N2<- N3<- ......... in this way the nodes are connected on pushing. for now topnode is pointing to N3.
    void push(int x){
        Node*newNode= new Node(x);
        newNode->next= topNode;
        topNode= newNode;
        count++;
        cout<<"Pushed: "<<x<<endl;
    }
    
    void pop(){
        if(isEmpty()){
            cout<<"Stack Underflow.."<<endl;
            return;
        }
        cout<<"Popped: "<<topNode->data<<endl;
        Node*temp= topNode;
        topNode= topNode->next;
        delete temp;
        count--;

    }

    void peek(){
        if(isEmpty()){
            cout<<"Stack is empty. nothing to print"<<endl;
            return;
        }
        cout<<"Top Node Value is: "<<topNode->data<<endl;
    }

    //professionly the size and isempty function should return only. but no need to print, it is managed in main funcn.
    bool isEmpty(){
        return topNode== nullptr;
    }

    int size(){
        return count;
    }

    ~Stack(){
        cout<<"Now destructer is called"<<endl;
        while(!isEmpty()){
            pop();
        }
    }
};

int main(){
    Stack s;
    cout<<s.isEmpty()<<endl;
    s.peek();
    s.push(1);
    s.peek();
    s.push(2);
    s.push(3);
    s.pop();
    cout<<s.size()<<endl;
    return 0;
}