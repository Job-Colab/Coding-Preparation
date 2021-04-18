class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int length = 0;
        ListNode* node = head;
        while(node != nullptr) {
            node = node->next;
            ++length;
        }
        node = head;
        for(int i = 0; i < (length / 2); i++) {
            node = node->next;
        }
        return node;
    }
};
