class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int i,j;
        vector<int> x,y,ans;
        for(i=0;i<n;i++)
            x.push_back(nums[i]);
        for(j=n;j<2*n;j++)
            y.push_back(nums[j]); 
       for(i=0;i<n;i++)
        {
            ans.push_back(x[i]);
            ans.push_back(y[i]);
        }
     return ans;   
    }
};