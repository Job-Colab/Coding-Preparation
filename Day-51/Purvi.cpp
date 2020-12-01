int StackQueue :: pop()
{
    if(s1.empty() and s2.empty())
        return -1;
    if(s2.empty()){
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
    }
    int s=s1.size(), i, ans;
    ans=s2.top();
    s2.pop();
    return ans;
}