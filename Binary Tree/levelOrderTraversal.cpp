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

void levelOrderTraversal(node* root){
    queue<node*> q;
    if(root== NULL){return;}
    //Entering the root node only.
    q.push(root);
    
    while(!q.empty()){
        node*temp= q.front();
        cout<<temp->data<<" ";
        q.pop();

        if(temp->left){
            q.push(temp->left);
        }

        if(temp->right){
            q.push(temp->right);
        }
    }

}

int main (){
    node*root= NULL;
    root= buildTree(root);

    cout<<"Printing level order traversal"<<endl;
    levelOrderTraversal(root);
    return 0;
}