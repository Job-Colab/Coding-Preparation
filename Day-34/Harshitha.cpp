
class Solution {
public:
    int maximum69Number (int num)
    {
        vector<int>greatNum;
        int last = 0;
        while(num != 0)
        {
            last = num%10;
            greatNum.push_back(last); 
            num /= 10;
        }
        int ans = 0 , k = 0;
        for(auto it = greatNum.rbegin() ; it != greatNum.rend() ; it++)
        {
            if(*it == 6 && k == 0)
            {
                *it = 9;
                ans = (ans * 10) + 9;
                k = 1 ;
            }
            else
            {
                ans = (ans * 10) + *it;
            }
                
        }
        
        return ans;
    }
    };
        


