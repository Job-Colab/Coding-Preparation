LLNode* solve(LLNode* node, int target) {
    LLNode* temp = node;
    LLNode* prev = NULL;
    while(temp != NULL) {
        if(prev == NULL && temp->val == target) {
            node = node->next;
            temp = node;
        }
        else {
            if(temp->val == target) {
                prev->next = temp->next;
                temp = prev;
            }
            prev = temp;
            temp = temp->next;
        }
    }
    return node;
}
