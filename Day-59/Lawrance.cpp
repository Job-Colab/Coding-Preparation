class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>> mat, int k) {
        vector<pair<int,int> > p;
        for(int i = mat.size() - 1; i >= 0; i--) {
            int temp = 0;
            for(auto j : mat[i]) {
                temp += j;
            }
            p.push_back({i, temp});
        }
        sort(p.begin(), p.end(), [](pair<int, int> i, pair<int, int> j){
                if(i.second == j.second) {
                    return i.first < j.first;
                }
                return i.second < j.second; }
            );
        vector<int> ans;
        for(int i = 0; i < k; i++) {
            ans.push_back(p[i].first);
        }
        return ans;
    }
};
