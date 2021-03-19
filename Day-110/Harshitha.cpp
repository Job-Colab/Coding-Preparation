vector<int> solve(vector<int>& nums) {
    
    vector<int>temp = nums;
    sort(temp.begin() , temp.end() , greater<int>());
    
    unordered_map<int , int>won;
    int j = 0;
    for(int i = 0 ; i < nums.size() ; ++i)
    {
        while(temp[i] == temp[i+1])
        {
            ++i;
        }
        won[temp[i]] = j;
        ++j;
    }
    for(int i = 0 ; i < nums.size() ; i++)
    {
        nums[i] = won[nums[i]];
    }
    return nums;
}
