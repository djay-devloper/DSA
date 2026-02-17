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

node* min(node* root){
    if(root== nullptr){return root;}
    while(root->left!= nullptr){
        root= root->left;
    }
    return root;
}

node* deleteFromBST(node* root, int key){
    if(root== nullptr){return nullptr;}

    //Search the node.
    if(key> root->data){
        root->right= deleteFromBST(root->right, key);
    }
    else if(key< root->data){
        root->left= deleteFromBST(root->left, key);
    }

    else{
        //case 1 no child
        if(root->left== nullptr && root->right== nullptr){
            delete root;
            return nullptr;
        }

        //case 2 single child
        else if(root->left== nullptr){
            node*temp= root->right;
            delete root;
            return temp;
        }
        else if(root->right== nullptr){
            node*temp= root->left;
            delete root;
            return temp;
        }

        //case 3 two children
        else{
            //Finding inorder predeccessor.
            node* temp= min(root->right);
            //Exchanging data of node to be deleted and inorder preccessor to make it case like above two. 
            root->data= temp->data;
            root->right= deleteFromBST(root->right, temp->data);
        }
    }
    //After deleting it finally return main root of bst.
    return root;
}

int main(){
    //pehle ek null node bana liya fir usko root declare kar diya.
    node* root= nullptr;
    cout<<"Enter data to create the Binary Search Tree"<<endl;
    takeInput(root);
    inorderTraversal(root);

    //updates root
    root= deleteFromBST(root, 7);
    cout<<endl;
    inorderTraversal(root);
    return 0;
}