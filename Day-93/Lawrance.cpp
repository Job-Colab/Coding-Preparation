class Solution {
public:
    ListNode* getIt(ListNode* node, int data) {
        while(node != nullptr && node->val == data) {
            node = node->next;
        }
        return node;
    }
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp = head;
        while(temp != nullptr) {
            ListNode* nd = getIt(temp->next, temp->val);
            temp->next = nd;
            temp = temp->next;
        }
        return head;
    }
};
