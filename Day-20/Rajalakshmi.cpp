/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
bool solve(LLNode* head) {
    LLNode* temp=head;
    while(temp->next!=NULL)
    {
    if(temp->next->val<=temp->val)
        return false;
    temp=temp->next;
    }
    return true;
    
}