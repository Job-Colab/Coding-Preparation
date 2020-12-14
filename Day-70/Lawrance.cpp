class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* one = l1;
        ListNode* two = l2;
        int carry = 0;
        ListNode* ans = new ListNode();
        ListNode* head = ans;
        ListNode* prev = nullptr;
        while(one != nullptr && two != nullptr) {
            int temp = one->val + two->val + carry;
            carry = temp / 10;
            head->val = temp % 10;
            head->next = new ListNode();
            prev = head;
            head = head->next;
            one = one->next;
            two = two->next;
        }
        while(one != nullptr || two != nullptr) {
            int ones = 0;
            int twos = 0;
            if(one == nullptr) {
                twos = two->val;
                two = two->next;
            }
            else {
                ones = one->val;
                one = one->next;
            }
            int temp = ones + twos + carry;
            carry = temp / 10;
            head->val = temp % 10;
            head->next = new ListNode();
            prev = head;
            head = head->next;
        }
        if(carry != 0)
            head->val = carry;
        else 
            prev->next = nullptr;
        return ans;
    }
};
