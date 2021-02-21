int solve(string s) {
    int n =s.length();
    int temp,sum=0,rsum=0,flag=0;
    for(int i=0;i<n;i++){
        if(isdigit(s[i])){
            temp=s[i]-'0';
            sum=(sum*10)+temp;
        }
        if(isdigit(s[i+1])==0)
        {
            rsum+=sum;
            sum=0;
            flag=-1;
        }
    }
    if(flag!=-1)
        return sum;
    return rsum;
}
