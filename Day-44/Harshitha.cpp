int solve(vector<int>& nums) 
{
    int n = nums.size() , count = 0;
    sort(nums.begin() , nums.end());
    int win_point(0);
    
    for(int i = 0 ; i < n ; i++)
    {
        //nums[i] += sub;
        //sub -= 1;
       // cout<<nums[i]<<" ";
       win_point = max(win_point , nums[i] + (n - i));
       
       
    }
    
    for(int i = 0 ; i < n; i++)
    {
        if(nums[i] + n >= win_point)
        count++;
    }
    return count;
}
