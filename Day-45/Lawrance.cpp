class Solution {
public:
    vector<int> shuffle(vector<int>& arr, int n) {
        vector<int>ans;
        for(int i = 0; i < n; i++) {
            ans.push_back(arr.at(i));
            ans.push_back(arr.at(n + i));
        }
        return ans;
    }
};
