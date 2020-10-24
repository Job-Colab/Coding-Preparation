/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
bool solve(LLNode* head)
{
    int count = 0 , size = 0;
    while(head->next)
    {
        int x  = head->next->val;
        size++;
        if(head->val < x)
        {
            count++;
        }
        head = head->next;
    }
    if(count == size)
    return true;
    else
    return false;
}
