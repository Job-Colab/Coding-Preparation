
class Solution {
public:
    int reverse(int x) {
        int ans=0;
        while(x)
        {
            int rev = ans*10 +x%10;
            if(rev/10!=ans)
                return 0;
            ans = rev;
            x/=10;
        }
        return ans;
    }
