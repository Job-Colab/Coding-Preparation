int solve(vector<int>& nums) {
    for(int i = 0 ; i < nums.size() ; i++)
    {
        if(nums[i] == i)
        {
            return(nums[i]);
            break;
        }
    }
    return(-1);
}
