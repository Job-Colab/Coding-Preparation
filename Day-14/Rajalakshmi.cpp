#include<bits/stdc++.h>
using namespace std;

bool isToeplitzMatrix(vector<vector<int>>& mat) {
      int i,j;
        int m=mat.size();
        int n=mat[0].size();
        for(i=0;i<m;i++)
            for(j=0;j<n;j++)
            {
                if(i-1>=0 &&j-1>=0)
                    if(mat[i-1][j-1]!=mat[i][j])
                      return false;
            }
        return true;
}
int main()
{
    vector<vector<int>> mat =  {{1,2,3,4},{5,1,2,3},{9,5,1,2}};
    bool ans = isToeplitzMatrix(mat);
    cout<<ans;
}