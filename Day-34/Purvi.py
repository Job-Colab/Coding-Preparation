class Solution {
public:
    int maximum69Number (int num) {
        int i=0, j, d=num, l, a[100];
        stringstream ss;
        while(d!=0)
        {
            a[i]=d%10;
            d/=10;
            i++;
        }
        for(j=i-1; j>=0; j--)
        {
            if(a[j]==9)
                continue;
            else
            {
                a[j]=9;
                break;
            }
        }
        for(j=i-1; j>=0; j--)
            ss<<a[j];
        ss>>l;
        return l;
    }
};