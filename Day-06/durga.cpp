class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0,num=nums[nums.size()-1];
        while(i<nums.size()-1)
       {
          if(nums[i]==nums[i+1])
          {
             i=i+2;
          }
           else
           {
             num=nums[i];
               i=nums.size();
           }
       }
        return num;
        
    }
};
