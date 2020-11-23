class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int,int> ans;
        for(int i : arr) {
            ans[i]++;
        }
        for(auto it = ans.rbegin(); it != ans.rend(); it++) {
            if(it->first == it->second) return it->first;
        }
        return -1;
    }
};
