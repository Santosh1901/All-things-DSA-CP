// This code will contain inserting node at front,tail,middle of a linked list
#include <iostream>
using namespace std;

class node{
public:
	int data;
	node *next;

	node(int d){
		data = d;
		next = NULL;
	}
};

int length(node*head){
	int count = 0;
	while(head != NULL){
		count++;
		head=head->next;
	}
	return count;
}
void insertAtHead(node* &head,int d){
	if(head == NULL){
		head = new node(d);
		return;
	}
	node *n = new node(d);
	n->next = head;
	head = n;
}
void insertAtTail(node*&head,int d){
	if(head == NULL){
		insertAtHead(head,d);
	}
	node * temp = head;
	while(temp->next!=NULL){
		temp = temp->next;
	}
	temp->next = new node(d);
}
void insertAtMiddle(node*&head,int d,int p){
	if(p==0 or head == NULL){
		insertAtHead(head,d);
		return;
	}
	else if(p>length(head)){
		insertAtTail(head,d);
	}
	else{
	node *n = new node(d);
	node *temp = head;
	p--;
	while(p--){
		temp = temp->next;
	}
	n->next = temp->next;
	temp->next = n;
}
}

void print(node *head){
	while(head!=NULL){
		cout<<head->data<<" ->";
		head = head->next;
	}
}

int main(){
	node *head = NULL;
	insertAtHead(head,4);
	insertAtHead(head,3);
	insertAtHead(head,1);
	insertAtHead(head,0);
	print(head);
	cout<<endl;
	insertAtMiddle(head,2,2);
	insertAtTail(head,5);
	print(head);
}
