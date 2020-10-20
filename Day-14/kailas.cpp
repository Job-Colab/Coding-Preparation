class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        bool ans = true;
        for(auto i = 1;i<matrix.size();i++){
            if(ans==0)
                break;
            for(auto j=1;j<matrix[i].size();j++){
                if(matrix[i][j]!=matrix[i-1][j-1]){
                    ans=false;
                    break;
                }
            }
        }
        return ans;
    }
};
