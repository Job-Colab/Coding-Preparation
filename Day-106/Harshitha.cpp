int solve(int n) {
    
    string s = to_string(n);
    for(int i = 0 ; i < s.length() ; ++i)
    {
        if(s[i] == '1' || s[i] == '2')
        {
            s[i] = '3';
            break;
        }
    }
    n = stoi(s);
    return n;
}
