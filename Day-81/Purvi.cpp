char* reverse(char *s, int n)
{
    stack<char> stk;
    int i;
    char *ans=s;
    for(i=0; s[i]!='\0'; i++){
        stk.push(s[i]);
    }
    for(i=0; i<n; i++){
        ans[i]=stk.top();
        stk.pop();
    }
    return ans;
}