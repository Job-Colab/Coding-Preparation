// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
  public:
  Node *reverse(Node *head){
    Node *current = head;
    Node *prev = NULL, *next = NULL;
    while (current != NULL) {
            next = current->next;
 
            current->next = prev;
 
            prev = current;
            current = next;
        }
    head = prev;
    return head;
}

struct Node* addTwoLists(struct Node* first, struct Node* second)
{
    Node *res=NULL, *prev=NULL, *temp;
    int sum=0, carry=0;
    first = reverse(first);
    second = reverse(second);
    while(first or second){
        sum = carry + (first? first->data:0) + (second? second->data:0);
        carry = (sum>=10)?1:0;
        sum = sum%10;
        temp = new Node(sum);
        if(res==NULL)
            res=temp;
        else
            prev->next = temp;
        prev = temp;
       
        if(first)
            first=first->next;
        if(second)
            second = second->next;
    }
    if(carry>0)
        temp->next = new Node(carry);
    return reverse(res);
}

};

// { Driver Code Starts.
int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long arr[n];

        for (int i = 0; i < n; i++) 
            cin >> arr[i];
        
        Solution ob;
        ob.sortIt(arr, n);

        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends