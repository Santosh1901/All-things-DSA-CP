//  the following code shows how to insert a node at any postiion of the linked list
void insertAtLocation(node*head,int d,int p){
  if(p == 0 or head == NULL){
    insertAtHead(head,d);
    return ;
  }
  else if(p>length(head)){
    insertAtTail(head,d);
  }
  else{
    node *newnode = new node(d);
    node *temp = head;
    p--;
    while(p--){
      temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
  }
}
      
  
  



















