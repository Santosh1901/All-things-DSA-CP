// the following code shows how to sort a linked list using merge sort technique
node*mergeSort(node*head){
    if(head || head->next){
        return head;
    }

    node*mid = middle(head); // returns middle of linked list
    node*a = head;
    node*b = mid->next;
    mid->next = NULL;
    a = mergeSort(a);
    b = mergeSort(b);
    node *c = merge(a,b);
    return c;
}
