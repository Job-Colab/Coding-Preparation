#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        unordered_map<int, int> mp;
        for(int i = 0; i < nums.size(); i++) {
            auto it = mp.find(target - nums[i]);
            if(it != mp.end() && i != it->second) {
                ans.push_back(i);
                ans.push_back(it->second);
                break;
            }
            else
                mp.insert(pair<int,int>(nums.at(i),i));
        }
        return ans;
    }
};

int main(int argc, char *argv[]) {

    Solution *s = new Solution();
    vector<int> test = {2, 7, 11, 15};
    vector<int> ans = s->twoSum( test, 9);
    cout << ans.at(0) << " " << ans.at(1) << endl;
    return 0;
}
