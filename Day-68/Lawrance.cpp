class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans = 0;
        for(int i : nums) {
            int temp = 0;
            while(i != 0) {
                i /= 10;
                ++temp;
            }
            if(temp % 2 == 0) ++ans;  
        }
        return ans;
    }
};
