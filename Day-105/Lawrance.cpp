class NumArray {
public:
    vector<int> nums;
    NumArray(vector<int>& nums) {
        this->nums = nums;
    }
    
    int sumRange(int i, int j) {
        int ans = 0;
        for(int k = i; k <= j; k++) {
            ans += (nums[k]);
        }
        return ans;
    }
};
