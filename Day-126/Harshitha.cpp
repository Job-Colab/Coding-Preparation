class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        
        int count = 0;
        ListNode* temp = head;
        while(head != NULL)
        {
           ++count;
            head = head->next;
        }

        for(int i = 0 ; i < count/2 ; ++i)
        {
            temp = temp->next;
        }
            return temp;
    }
};
