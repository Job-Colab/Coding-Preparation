int countPairs(struct Node* head1, struct Node* head2, int x) {
    // Code here
    unordered_set <int> ar;
    int temp;
    while(head1!=NULL){
        temp = head1->data;
        ar.insert(temp);
        head1 = head1->next;
    }
    int count=0;
    while(head2!=NULL){
        temp = x - head2->data;
        if(ar.find(temp)==ar.end()){
            //nothing;
        }
        else
            count++;
        head2=head2->next;
    }
    return count;
}
