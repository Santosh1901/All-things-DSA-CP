int len(Node *head){
        int p = 0;
        while(head){
            head = head->next;
            p++;
        }
        return p;
    }
    Node* rotate(Node* head, int k)
    {
       
        int l = len(head);
        if(l == k){
            return head;
        }
        Node* temp = head,*node =head,*x;
    for(int i = 1;i<k;i++){
        temp = temp->next;
    }
    Node *tmp = temp;
    while(tmp->next){
        tmp = tmp->next;
    }
    x = temp->next;
    tmp->next = node;
    temp->next = NULL;
    
        return x;
    }
