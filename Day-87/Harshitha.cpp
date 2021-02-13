int atoi(string str)
{
    int ans = 0;
    bool sign = false ;
    
    if(str[0] == '-' )
    {
        sign = true;
        
    }
    for(int i = 0 ; i < str.length() ; ++i)
    {
        if(str[i] == '-' && i == 0)continue;
        if(str[i] >= '0' && str[i] <= '9')
        {
            ans = (ans * 10) + str[i] - '0';
        }
        
        else
        {
        ans = -1;
        break;
        }
    }
    return sign ? -1 * ans : ans ;
}
