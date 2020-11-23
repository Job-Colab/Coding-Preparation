class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        int i,j;
        bool flag;
        string ans;
        for(i=0;i<paths.size();i++)
        {
            flag=false;
            for(j=0;j<paths.size()&&!flag;j++)
                if(paths[i][1]==paths[j][0])
                    flag=true;
            if(flag==false)
                ans= paths[i][1];
        }
        return ans;
    }
};