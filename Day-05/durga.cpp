#include "solution.hpp"
using namespace std;

class Solution {
    public:
    int solve(vector<int>& nums) {
        if(nums.size()>0)
        {
          int min=*max_element(nums.begin(),nums.end()),c=0;
          for(int i=0;i<nums.size();i++)
            {
               if(nums[i]==i && nums[i]<=min)
                 {
                    min=nums[i];
                    c=1;
                 }
            }
           if(c==0)
           {
              return -1;
           }
          else
           {
           return min;
           }
         }
        else
        {
            return -1;
        }
    }
    
};
