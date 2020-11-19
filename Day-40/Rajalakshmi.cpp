/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode dummy(INT_MIN);
        ListNode *t1=l1,*t2=l2,*ans=&dummy;
        while(t1&&t2)
        {
            if(t1->val>t2->val)
            {
                ans->next=t2;
                t2=t2->next;
            }
            else{
                ans->next=t1;
                t1=t1->next;
            }
            ans=ans->next;
        }
        while(t1)
        {
            ans->next=t1;
            ans=ans->next;
            t1=t1->next;
        }
        while(t2)
        {
            ans->next=t2;
            ans=ans->next;
            t2=t2->next;
        }
        return dummy.next;
    }
};