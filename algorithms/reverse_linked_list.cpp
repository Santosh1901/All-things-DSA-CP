// the following code contains iterative way of reversing a linked list
void reverse(node*&head){
  node*curr = head;
  node *prev = NULL,*next = NULL;
  while(curr!= NULL){
    next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
  }
  head = prev;
}
