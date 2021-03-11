class Solution
{
    public:
    Node* rotate(Node* head, int k)
    {
       Node* tail = head;
       while(tail->next != NULL) {
           tail = tail->next;
       }
       for(int i = 0; i < k; ++i) {
           Node* temp = new Node(head->data);
           head = head->next;
           tail->next = temp;
           tail = tail->next;
       }
       return head;
    }
};
