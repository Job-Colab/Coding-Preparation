class Solution {
public:
   vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        set<pair<int,int>> s;
        for(int i=0;i<mat.size();i++){
            int sol=0;
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==1)
                    sol++;
            }
            s.insert({sol,i});
        }
        vector<int> ans;
        for (auto x : s) { 
            if(k>0){
               ans.push_back(x.second);
            }else{
                break;
            }
            k--;
        }
       return ans;
    }
};
