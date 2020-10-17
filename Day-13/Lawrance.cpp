class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        auto it = nums.begin();
        for(auto i = nums.begin(); i != nums.end(); i++) {
            if(*i == val) {
                swap(*i, *it);
                it++;
            }
        }
        nums.erase(nums.begin(), it);
        return nums.size();
    }
};
