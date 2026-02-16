#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this->data= d;
        this->left= nullptr;
        this->right= nullptr;
    }
};

node* insertIntoBST(node* root, int d){
    //base case 
    if(root== nullptr){
        // root= new node(d);
        // return root;
        return new node(d);
    }

    //insert to right part
    if(d> root->data){
        root->right= insertIntoBST(root->right, d);
    }

    //insert to left part.
    else{
        root->left= insertIntoBST(root->left, d);
    }

    return root;
}

void takeInput(node* &root){
    int data;
    //First data as root.
    cin>>data;

    while(data!= -1){
        root= insertIntoBST(root, data);
        cin>>data;
    }
}

//traversing 
void inorderTraversal(node* root){
    // base case
    if(root== nullptr){return;}

    inorderTraversal(root->left);
    cout<<root->data<<" ";
    inorderTraversal(root->right);
}

int main(){
    //pehle ek null node bana liya fir usko root declare kar diya.
    node* root= nullptr;
    cout<<"Enter data to create the Binary Search Tree"<<endl;
    takeInput(root);

    inorderTraversal(root);
    return 0;
}