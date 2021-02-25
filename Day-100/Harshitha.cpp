class Solution {
public:
    int hammingWeight(uint32_t n) {
        uint32_t count = 0;
        
        for(uint32_t i = 1 << 31 ; i > 0 ; i /= 2)
        {
            if(n & i)
            ++count;
        }
        return count;
    }
};
