#include <iostream>

using namespace std;

struct Node{

    int data;

    struct Node *right, *left;

    Node(int data){

        this->data = data;
        right = left = NULL;
    }
};

void preorder( Node *root){

    if(root==NULL){

        return;
    }
    cout<<root->data;

    preorder(root->left);
    preorder(root->right);
}

void inorder(Node *root){

    if(root==NULL){

        return;
    }

    inorder(root->left);
    cout<<root->data;
    inorder(root->right);
}

void postorder(Node *root){

    if(root == NULL){

        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data;
}
int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    (root->left)->left = new Node(4);
    (root->left)->right = new Node(5);

    preorder(root);
    cout<<endl;
    inorder(root);
    cout<<endl;
    postorder(root);

    return 0;
}
