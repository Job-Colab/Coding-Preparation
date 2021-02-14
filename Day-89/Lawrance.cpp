int countPairs(struct Node* head1, struct Node* head2, int x) {
    unordered_set<int> st;
    Node* temp = head1;
    while(temp != NULL) {
        st.insert(temp->data);
        temp = temp->next;
    }
    int answer = 0;
    temp = head2;
    while(temp != NULL) {
        if(st.find(x - temp->data) != st.end()) ++answer;
        temp = temp->next;
    }
    return answer;
}
