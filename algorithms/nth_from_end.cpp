// the following code returns the nth node from end of the given linked list
// approach 1 
int getNthFromLast(Node *head, int n)
{
       // Your code here
       int len = 0;
       Node* temp = head;
       while(temp!=NULL)
       {
           len++;
           temp = temp->next;
           
       }
       if(len<n){
           return -1;
       }
       else{
           int k = len-(n-1);
           Node* t = head;
           int i = 1;
           while(i<k){
               t = t->next;
               i++;
           }
           return t->data;
       }
}
// Approach 2
int getNthFromLast(Node *head,int n){
       Node *curr=head,*temp=head;
       while(n!=0){
              if(curr==NULL)
                     return -1;
              curr = curr->next;
              n--;
       }
       while(curr!=NULL){
              curr = curr->next;
              temp = temp->next;
       }
       if(temp!=NULL)
              return temp->data;
       else
              return -1;
