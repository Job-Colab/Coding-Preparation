class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
        int flag = 0;
        long long int product=1;
        for(int i =0;i<nums.size();i++){
            if(nums[i]==0){
                flag++;
            }
            else
                product*=nums[i];
        }
        if(flag==1){
            for(int i =0;i<nums.size();i++){
                if(nums[i]!=0)
                    nums[i]=0;
                else
                    nums[i]=product;
            }
        }
        else if(flag>1){
            for(int i =0;i<nums.size();i++){
                    nums[i]=0;;
            }
        }
        else{
            for(int i =0;i<nums.size();i++){
                nums[i] = product /nums[i];
            }
        }
        return nums;
    }
};

