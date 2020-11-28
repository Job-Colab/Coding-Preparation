class Solution {
public:
    vector<int> countBits(int num) {
        
        vector<int>bits(num);
        bits.push_back(0);
        
        if(num == 0)return bits;
        
        for(int i = 1 ; i <= num ; i++){
        if(i % 2 == 0)
            bits[i] = bits[i/2];
        else{  
        bits[i] = bits[i-1] + 1;}
    }
            return bits;
        }
};
