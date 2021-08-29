int count(node*root){
  if(root == NULL){
    return 0;
  }
  return 1+count(root->left)+count(root->right);
}
