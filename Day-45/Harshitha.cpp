#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
    public:
    vector<int> shuffle(vector<int>& nums, int n) 
    {
        vector<int>ans;
        for(int i = 0 ; i < nums.size() ; i++)
        {
        ans.push_back(nums[i]);
        ans.push_back(nums[i+n]);
        }
    return ans;
    }
};


int main()
{
    int n;
    cin>>n;

    vector<int>nums;
    

    for(int i = 0 ; i < n*2 ; i++)
    cin>>nums[i];

    Solution sol;
    nums = sol.shuffle(nums  , n);

   
    for(int i = 0 ; i < n*2 ; i++)
    cout<<nums[i]<<" ";
    
}
