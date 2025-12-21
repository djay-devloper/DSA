//This is a preorder construction.
#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;

    node(int data){
        this->data= data;
        this->left= nullptr;
        this->right= nullptr;
    }
};

node* buildTree(node* root){
    //When a node is created, it behaves likes its own root.
    cout<<"Enter The data: ";
    int data;
    
    cin>>data;
    if(data== -1) {return NULL;}

    root= new node(data);

    //Using recursion 
    cout<<"For left of "<<data<<" ";
    root->left= buildTree(root->left);
    cout<<"For right of "<<data<<" ";
    root->right= buildTree(root->right);
    return root;
    }

int main(){
    node* root= NULL;
    
    root= buildTree(root);
    return 0;
}