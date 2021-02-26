string solve(string s) {
    stack <char> ans;
    int i = 0;
    ans.push(s[i]);
    for(i = 1;i<s.length();i++){
        if(ans.top() != s[i]){
            ans.push(s[i]);
        }
    }
    string cs;
    while(!ans.empty()){
        cs+=ans.top();
        ans.pop();
    }
    reverse(cs.begin(),cs.end());
    return cs;
}
