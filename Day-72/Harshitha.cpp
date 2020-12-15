int solve(string s) {
    
    /*long long int num = stoi(s);
    long long int decimal = 0 , power = 0;
    while(num)
    {
        decimal += (num%10) * (pow(3,power++));
        num/=10;
    } :(*/ // Does not work as num does not fit into integer..
        
    int ans = 0;
    int base = 1 ;
    reverse(s.begin() , s.end());
    for(auto i : s)
    {
        ans += (i - '0') * base;
        cout<<ans<<'\n';
        base *= 3;
    }
    
    return ans;
}
