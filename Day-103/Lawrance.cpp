int solve(LLNode* node) {
    int length = -1;
    int answer = 0;
    LLNode* temp = node;
    while(temp != nullptr) {
        ++length;
        temp = temp->next;
    }
    temp = node;
    while(temp != nullptr) {
       if(temp->val == 1) {
           answer += pow(2, length);
       }
       temp = temp->next;
       --length;
    }
    return answer;
}

/*
// Interesting solution
int solve(LLNode* node) {
    int num = 0;

    while (node != NULL) {
        num = num * 2 + node->val;
        node = node->next;
    }
    return num;
}
*/
