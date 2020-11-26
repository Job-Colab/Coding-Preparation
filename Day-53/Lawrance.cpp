class Solution {
public:
    
    int heightChecker(vector<int>& heights) {
        map<int, int> mp;
        for(int i : heights) {
            ++mp[i];
        }
        int tracker = 0;
        int ans = 0;
        for(auto i : mp) {
            while(i.second != 0) {
                if(i.first != heights.at(tracker++)) {
                    ++ans;
                }
                i.second--;
            }
        }
        return ans;
    }
};
