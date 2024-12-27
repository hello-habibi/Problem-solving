#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data ; 
    struct  Node *left;
    struct Node *right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL; 
    }
    
};
void preOrder(Node *node ){
    if(node == NULL){
        return;
    }
    cout<<node->data<<" ";
    preOrder(node->left);
    preOrder(node->right);
}
void inOrder(Node *node){
    if(node == NULL){
        return;
    }
    inOrder(node->left);
    cout<<node->data<<" ";
    inOrder(node->right);
}
void postOrder(Node *node){
    if(node ==NULL){
        return;
    }
    postOrder(node->left);
    postOrder(node->right);
    cout<<node->data<<" ";
}
/*!SECTION Write code for level order tervasal please 
*/
int findDept(Node *root){
    if(root == NULL){
        return 0 ; 
    }
    int lh = findDept(root->left);
    int rh = findDept(root->right);

    return 1 + max(lh , rh);
}

int main(){
    struct Node * root = new Node(2);
    root->left = new Node(34);
    root->right = new Node(555);
    root->right->right = new Node(4690);
    root->right->left = new Node(334);
    preOrder(root);
    cout<<endl;
    inOrder(root);
    cout<<endl;
    postOrder(root);
    cout<<endl;
    cout<<findDept(root)<<endl;
    return 0;
}