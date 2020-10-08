class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        map<int , int>num;
        vector<int>indices;
        
        int sum ;
        for(int i = 0 ; i < nums.size() ; i++)
        {
             sum = target - nums[i];
            
             if(num.find(sum) == num.end())
             {
                 num.insert(make_pair(nums[i] , i));
             }
            else
            {
                auto it = num.find(sum);
                indices.push_back(it->second);
                indices.push_back(i);
            }
        }
        return indices;
        
    }
};
