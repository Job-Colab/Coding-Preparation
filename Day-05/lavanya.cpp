#include "solution.hpp"
using namespace std;

class Solution {
    public:
    int solve(vector<int>& nums) {
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == i ){
                ans.push_back(nums[i]);
            }
        }
        sort(ans.begin(),ans.end());
        if(ans.size()<1){
            return -1;
        }
        else{
            return ans[0];
        }
    }
};
