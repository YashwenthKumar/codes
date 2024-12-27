#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node*left;
    node*right;
    node(int data):data(data),left(NULL),right(NULL){}
};
node* insert(node* root,int value){
    if(root == NULL){
        return new node(value);
    }
    if(value < root->data){
        root->left = insert(root->left,value);
    }else{
        root->right = insert(root->right,value);
    }
    return root;
}
bool search(node* root,int key){
    if(root == nullptr){
        return false;
    }
    if(root->data == key){
        return true;
    }else if(key < root->data){
        return search(root->left,key);
    }else{
        return search(root->right,key);
    }
}

void findmin(node*root){
    while(root->left != nullptr){
        root = root->left;
    }
    cout<<root->data<<endl;
}

void inorder(node*root){
    if(root == nullptr){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void preorder(node*root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(node*root){
    if(root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main(){
    node* root = nullptr;
    root = insert(root,50);
    root = insert(root,30);
    root = insert(root,70);
    root = insert(root,20);
    root = insert(root,40);
    root = insert(root,60);
    root = insert(root,80);
    inorder(root);
    findmin(root);
}









