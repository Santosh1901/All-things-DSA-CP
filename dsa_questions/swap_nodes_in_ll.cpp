// link -> https://leetcode.com/problems/swapping-nodes-in-a-linked-list/
int length(ListNode*head){
        int count = 0;
        while(head){
            count++;
            head = head->next;
        }
        return count;
    }
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode*temp=head,*tmp=head;
        int n = length(head) - (k-1);
        k--;n--;
        while(k--){
            temp = temp->next;
        }
        while(n--){
            tmp = tmp->next;
        }
        std::swap(temp->val,tmp->val);
        return head;
    }
