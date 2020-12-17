class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max=0;
        for(int i=0;i<accounts.size();i++){
            int amt=0;
            for(int j=0;j<accounts[i].size();j++){
                amt+=accounts[i][j];
            }
            if(amt>max){
                max=amt;
            }
        }
        return max;
    }
};
