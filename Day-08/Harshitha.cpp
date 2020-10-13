class Solution {
public:
    int lastStoneWeight(vector<int>& stones)
    {
        if(stones.size() == 1)
            return stones[0];
        
        int last = 0;
        
        for(int i = 0 ; i < stones.size(); i++)
        {   int x = 0;
            sort(stones.begin() , stones.end() , greater<int>());
            
            stones[x] -= stones[x + 1];
            stones[x + 1] = 0;
            
        } 
        
        for(int i = 0; i < stones.size() ; i++)
        {
            //cout<<stones[i]<<" ";
            if(stones[i] != 0)
                last = stones[i];
            break;
        }
        return last;
    }
};