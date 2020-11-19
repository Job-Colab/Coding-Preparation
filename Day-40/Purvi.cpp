class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode res(0);
        ListNode *tail=&res;
        while(l1 and l2){
            if(l1->val < l2->val){
                tail->next=l1;
                l1=l1->next;
            }
            else{
                tail->next=l2;
                l2=l2->next;
            }
            tail=tail->next;
        }
        tail->next=l1?l1:l2;
        return res.next;
    }
};