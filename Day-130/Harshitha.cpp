
int solve(vector<int>& nums) {
    
    int n = nums.size();
    int diff = (nums[n-1] - nums[0] ) / n;
    
    
    for(int i = 0 ; i < nums.size() - 1 ; ++i)
    {
        if((nums[i+1] - nums[i])!= diff)
        {
            return nums[i] + diff;
        }
    }
    return nums[0] + diff;
}
