class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> sumar;
        int sum =0;
        for(auto i=0;i<nums.size();i++){
            sum+=nums[i];
            sumar.push_back(sum);
        }
        return sumar;
    }
};
