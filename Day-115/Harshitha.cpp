string timeConversion(string s)
{
    int temp = 0;
    string ans = s;
    ans.resize(8);
    
    if (s[8] == 'A' && s[0] == '1' && s[1] == '2')
    {
        ans[0] = '0';
        ans[1] = '0';
    }
    else if((s[0] == 1 && s[1] == 2) && s[8] =='P')
    {
        return ans;
    }
    else if(s[8] == 'P'){
        temp = ((ans[0] - '0') * 10 ) + (ans[1] - '0') + 12;
        if(temp > 23) 
        {
            return ans;
        }
        
        string now = to_string(temp);
        ans[0] = now[0];
        ans[1] = now[1];
    }
    return ans;
}

//Time complexity : O(1)
//Space complexity : o(n)
