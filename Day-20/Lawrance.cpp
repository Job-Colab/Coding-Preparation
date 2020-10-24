/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
bool solve(LLNode* head) {
    LLNode* temp = head;
    int tracker = INT_MIN;
    while(temp != NULL) {
        if(temp->val > tracker) {
            tracker = temp->val;
        }
        else {
            return false;
        }
        temp = temp->next;
    }
    return true;
}
