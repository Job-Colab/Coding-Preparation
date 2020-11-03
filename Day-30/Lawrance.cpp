class Solution {
public:
    int countRow(vector<int> row) {
        int negative = 0;
        for(int i : row) {
            if( i < 0) ++negative;
        }
        return negative;
    }
    int countNegatives(vector<vector<int>>& grid) {
        int negative = 0;
        for(vector<int> i : grid) {
            negative += countRow(i);
        }
        return negative;
    }
};
