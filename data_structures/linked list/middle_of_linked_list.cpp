// the following code returns the middle element of the linked list, if the list is empty it returns -1
int getMiddle(node*head){
  node * slow = head,*fast = head;
  if(head==NULL){
    return -1;
  }
  while(fast && fast->next){
    slow = slow->next;
    fast = fast->next->next;
  }
  return slow->data;
}
