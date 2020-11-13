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
    ListNode* mergeTwoLists(ListNode* one, ListNode* two) {
        if(!one && !two)                  
            return one;                        
        else if(!one) { 
            return two;
        }
        else if(!two) {
            return one;
        }
        else {
            if(one->val<two->val) {
               one->next=mergeTwoLists(one->next,two);
               return one;
            }
            else {
               two->next=mergeTwoLists(one,two->next);
               return two;
            }
        }
    }
};
