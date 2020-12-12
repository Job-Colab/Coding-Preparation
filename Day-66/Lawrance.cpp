class Solution {
public:
    int minMoves(vector<int>& nums) {
        int ans = 0;
        int min = *min_element(nums.begin(), nums.end());
        for(int i : nums) ans += (i - min);
        return ans;
    }
};
