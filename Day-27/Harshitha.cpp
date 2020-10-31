class Solution {
public:
    bool judgeCircle(string moves) {
        unordered_map<char, pair<int, int> > mp;
        mp['U'] = {0, 1};
        mp['D'] = {0, -1};
        mp['R'] = {1, 0};
        mp['L'] = {-1, 0};
        pair<int, int> ans = {0, 0};
        for(char i : moves) {
            auto j = mp[i];
            ans.first += j.first;
            ans.second += j.second;
        }
        return (ans.first == 0 && ans.second == 0);
    }
};
