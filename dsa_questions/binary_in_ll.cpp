// question link -> https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/
int length(ListNode*head){
        int count=0;
        while(head != NULL){
            
            head = head->next;
            count++;
        }
        return count;
    }
    int getDecimalValue(ListNode* head) {
        int l = length(head);
        l--;
        int sum = 0;
        while(l>=0){
            sum += head->val * pow(2,l);
            l--;
            head = head->next;
        }
        return sum;
    }
