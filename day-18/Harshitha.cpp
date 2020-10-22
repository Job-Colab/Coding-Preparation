class Solution {
public:
    int minOperations(vector<string>& logs)
    {
        int count = 0;
        
        for(int i = 0 ; i < logs.size() ; i++)
        {
            if(logs[i] == "../")
            {
               count = max(0 , --count);
            }
            else if(logs[i] == "./")
            {
                continue;
            }
            else
            {
                ++count;
            }
        }
     return count;
    }
    
};
