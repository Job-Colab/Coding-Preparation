Node *reverseDLL(Node *head) {
    Node* newHead = head;
    Node* prev;
    while (newHead != NULL) {
        Node* next = newHead->next;
        newHead->next = newHead->prev;
        newHead->prev = next;
        prev = newHead;
        newHead = next;
    }
    return prev;
}
