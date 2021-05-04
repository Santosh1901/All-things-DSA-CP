// implementation of binary search tree and inorder traversal
// fact: inorder traversal always gives sorted 
#include <iostream>
using namespace std;
class bst{
  int data;
  bst *left,*right;
  public:
    bst();
    bst(int);
    void inorder(bst*);
    bst *insert(bst*,int);
};
bst::bst(){
    data = 0;
    left = right = NULL;
}
bst::bst(int val){
    data = val;
    left = right = NULL;
}
bst* bst::insert(bst* root, int val){
    if(!root){
        return new bst(val);
    }
    if(val<root->data){
        root->left = insert(root->left,val);
    }
    else {
        root->right = insert(root->right,val);
    }
}
void bst::inorder(bst *root){
    if(!root) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){
    bst b,*root = NULL;
    root = b.insert(root,40);
    root = b.insert(root,70);
    root = b.insert(root,50);
    root = b.insert(root,20);
    root = b.insert(root,80);
    root = b.insert(root,60);
    root = b.insert(root,30);
    b.inorder(root);
    return 0;
}
    
