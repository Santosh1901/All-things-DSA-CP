// below code shows how to detect a loop in a linked list and remove it
void removeLoop(Node *loop,Node*head){
	Node* ptr1,*ptr2;
	ptr1 = head;
  while(1){
		ptr2 = loop;
		while(ptr2->next != loop && ptr2->next != ptr1){
			ptr2 = ptr2->next;
		}
		if(ptr2->next == ptr1) break;

		ptr1 = ptr1->next;
	}
	ptr2->next = NULL;
}
int detectLoop(Node *head){
	Node *slow = head, *fast = head;
	while(fast && fast->next){
		slow = slow->next;
		fast = fast->next->next;
		if(slow == fast){
      // calls to the remove loop function which removes the loop
			removeLoop(slow,head);
			return 1;
		}
	}
	return 0;
}
