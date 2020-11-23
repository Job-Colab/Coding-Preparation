class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size(); 
        int i,j;
        vector<int> k;
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            if(nums[i]+nums[j]==target )
            {
                k.push_back(i);
                k.push_back(j);          
            }
        }
        return k;
    }
};
