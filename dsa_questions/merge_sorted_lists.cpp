// question link -> https://leetcode.com/problems/merge-two-sorted-lists/submissions/
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(!l1) return l2;
        if(!l2) return l1;
        
        if(l1->val>l2->val) swap(l1,l2);
        ListNode*ans = l1;
        while(l1 && l2){
            ListNode*temp = NULL;
            while(l1 && l1->val<=l2->val){
                temp = l1;
                l1 = l1->next;
            }
            temp->next = l2;
            swap(l1,l2);
        }
        return ans;
    }
};
