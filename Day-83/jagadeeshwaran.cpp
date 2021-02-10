class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
         if(nums.size() == 0)
            {
                return(i);
            }
        for(int j = 0 ; j < nums.size() ; j++)
        {
            if(nums[i] != nums[j])
            {
                i++;
                nums[i] = nums[j];
            }
        }
        return(i+1);
        
    }
};
