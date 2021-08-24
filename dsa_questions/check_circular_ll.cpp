bool isCircular(Node *head)
{
   
   if(head == NULL) return true;
   Node * temp = head->next;
   while(temp!= head&&temp!=NULL){
       temp = temp->next;
   }
   if(temp == head){
       return true;
   }
   else return false;
}
