#include <bits/stdc++.h>

using namespace std;

struct node{
    int value;
    struct node* left;
    struct node* right;
    node(int data){
        value=data;
        left=NULL;
        right=NULL;
    }
};

void inorder(node* root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->value<<" ";
        inorder(root->right);
    }
}

void preorder(node* root){
    if(root!=NULL){
        cout<<root->value<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(node* root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        cout<<root->value<<" ";
    }
}

int main()
{
    struct node* root = new node(10);
    root->left=new node(15);
    root->left->left=new node(3);
    root->left->right=new node(6);
    root->left->left->left=new node(5);
    root->right=new node(30);
    root->right->right=new node(2);
    root->right->right->left=new node(9);
    root->right->right->right=new node(8);

    cout<<"Pre order Traversal:"<<endl;
    preorder(root);
    cout<<endl;
    cout<<"In order Traversal:"<<endl;
    inorder(root);
    cout<<endl;
    cout<<"Post order Traversal:"<<endl;
    postorder(root);
    return 0;
}
