// link -> https://leetcode.com/problems/swap-nodes-in-pairs/
    int length(ListNode *head){
        int count = 0;
        while(head){
            count++;
            head = head->next;
            
        }
        return count;
    }
    ListNode* swapPairs(ListNode* head) {
        int n = length(head),i=1;
        ListNode*temp = head;
        if(n == 0 || n==1){
            return head;
        }
        while(i<=n && temp->next){
            swap(temp->val,temp->next->val);
            i += 2;
            temp = temp->next->next;
        }
        return head;
    }
};
