// Firstly create a binary tree and then make a level order traversal.
#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
    int data;
    node*left;
    node*right;

    node(int data){
        this->data= data;
        left= nullptr;
        right= nullptr;
    }
};

node* buildTree(node* root){
    int data;
    cout<<" Enter data: ";
    cin>>data;

    if(data== -1){return NULL;}

    root= new node(data);

    // recursively calling buildtree function for each node.
    cout<<"for left of- "<<data;
    root->left= buildTree(root->left);

    cout<<"for right of- "<<data;
    root->right= buildTree(root->right);

    return root;

}

void inorderTraversal(node* root){
    // base case
    if(root== nullptr){return;}

    inorderTraversal(root->left);
    cout<<root->data<<" ";
    inorderTraversal(root->right);
}

void preorderTraversal(node* root){
    //base case 
    if(root== nullptr){return;}

    cout<<root->data<<" ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

void postorder(node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root-> data << " ";

}

int main (){
    node*root= NULL;
    root= buildTree(root);
    
    cout<<"Inorder traversal: ";
    inorderTraversal(root);

    cout<<"preorder Traversal: ";
    preorderTraversal(root);
    return 0;
}