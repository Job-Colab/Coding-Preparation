 int BinaryToDecimal(string n)
{
    string num = n;
    int dec_value = 0;

    int base = 1;
    int len = num.length();
    for(int i = len-1 ; i >= 0 ; i--)
    {
        if(num[i] == '1')
        {
            dec_value +=base;
        }
        base = base*2;
    }
    return(dec_value);
}
int solve(LLNode* node) {
    LLNode* temp = node;
    string s;
    while(temp != NULL)
    {
        s.append(to_string(temp->val));
        temp = temp->next;
    }
    return(BinaryToDecimal(s));
}