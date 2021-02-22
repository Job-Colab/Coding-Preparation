class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *current = head;
        ListNode *nn;
        if(current==NULL)
            return head;
        while(current->next!=NULL){
            if(current->val==current->next->val){
                nn=current->next->next;
                current->next=nn;
            }
            else
                current=current->next;
        }
        return head;
    }
};
