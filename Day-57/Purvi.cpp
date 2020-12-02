class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int i, j;
        vector<int>a(nums.size(), 0);
        for(i=0; i<nums.size(); i++)
            for(j=0; j<nums.size(); j++)
            {
                if(nums[j]<nums[i])
                    a[i]++;
            }
        
        return a;
    }
};