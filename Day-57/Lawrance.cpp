class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> arr;
        for(int i = 0; i < nums.size(); i++) {
            arr.push_back(0);
            for(int j = 0; j < nums.size(); j++) {
                if(i != j && nums[j] < nums[i]) {
                    arr[i]++;
                }
            }
        }
        return arr;
    }
};
