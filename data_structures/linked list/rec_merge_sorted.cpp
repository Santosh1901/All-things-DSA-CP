// the code shows how to merge two sorted linked lists using recursion
node *merge(node*a,node*b){
  if(!a) return b;
  if(!b) return a;
  
  node *c;
  if(a->data < b->data){
    c = a;
    c->next = merge(a->next,b);
  }
  else{
    c= b;
    c->next = merge(a,b->next);
  }
  return c;
}
