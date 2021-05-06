// This code contains preorder traversal in a bst without recursion
// Implementing stacks
#include <bits/stdc++.h>
using namespace std;
class bst{
    int data;
    bst *left,*right;
    public:
        bst();
        bst(int);
        void preorder(bst*);
        bst* insert(bst*,int);
};
bst::bst():data(0),left(NULL),right(NULL){}
bst::bst(int val):data(val),left(NULL),right(NULL){}
void bst::preorder(bst* root){
    stack<bst* > s;
    s.push(root);
    while(!s.empty()){
        bst* node = s.top();
        cout<<node->data<<" ";
        s.pop();
        if(node->right) s.push(node->right);
        if(node->left) s.push(node->left);
    }
}
bst* bst::insert(bst* root,int val){
    if(!root){
        return new bst(val);
    }
    if(val>root->data) root->right = insert(root->right,val);
    else root->left = insert(root->left,val);
    return root;
}
int main(){
    bst b,*root = NULL;
    root = b.insert(root,30);
    b.insert(root,20);
    b.insert(root,80);
    b.insert(root,50);
    b.insert(root,60);
    b.insert(root,70);
    b.insert(root,40);
    b.preorder(root);
}
