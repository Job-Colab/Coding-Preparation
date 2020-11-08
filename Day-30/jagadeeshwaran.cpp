class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count = 0,j;
        for(int i = 0 ; i < grid.size() ; i++)
        {
            for(j = grid[i].size() - 1 ; j >= 0 ; j--)
            {
                if(grid[i][j] >= 0)
                {
                    break;
                }
            }
            count = count + (grid[i].size()-(j+1));
        }
        return count;
    }
};
