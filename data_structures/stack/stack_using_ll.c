// implementation of stack using linked list
#include <stdio.h>
#include <stdlib.h>

struct node
{	
	struct node* next;
	int data;
	
};
struct node* top = NULL;
void push(int val){
	struct node* newnode = (struct node*)malloc(sizeof(struct node));
	
	if(!newnode){
		printf("%s\n", "Heap overflow");
		return;
	}
	newnode->next = top;
	newnode->data = val;
	top = newnode;
}
void pop(){
	struct node*temp;
	if(top == NULL) return;
	temp = top;
	top = top->next;
	free(temp);
}

void printStack(){
	struct node* temp;
	temp = top;
	if(top == NULL)
		printf("%s\n", "Stack is empty");

	while(temp!=NULL){
		printf("%d->", temp->data);
		temp = temp->next;
	}
}
int main(){
	
	push(1);
	push(2);
	push(3);
	push(4);
	printStack();
	printf("\n");
	pop();
	printStack();
}
