// the following code contains searching of a element in a linked list recursively
bool searchRecursive(node*head,int key){
  if(head == NULL)
    return false;
  if(head->data==key)
    return true;
  else return searchRecursive(head->next,key);
}
