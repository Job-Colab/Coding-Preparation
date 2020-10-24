/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
bool solve(LLNode* head) {
    LLNode *temp=head;
    while(temp->next){
        if(temp->val>=temp->next->val)
            return false;
        temp=temp->next;
    }
    return true;
}