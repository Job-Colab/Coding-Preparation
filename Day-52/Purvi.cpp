class Solution {
public:
    int reverse(int x) {
        int flag=1;
        long long rev=0, num, rem;
        if(x<0)
            flag = -1;
        num=llabs(x);
     
       while(num!=0)
        {
            rem=num%10;
            rev=rev*10+rem;
            num=num/10;
        }
        if(rev>2147483648)
            return 0;
        return flag*rev;
    }
};