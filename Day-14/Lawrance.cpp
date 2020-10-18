class Solution {
public:
    bool returnIfTrue(int i, int j, int n, int m, vector<vector<int>>& matrix) {
        int num = matrix[i][j];
        while(i < n && j < m) {
            if(matrix[i][j] != num) return false;
            i++;
            j++;
        }
        return true;
    }
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix.at(0).size();
        int start_i = 0;
        int start_j = m - 1;
        bool result;
        while(start_i < n or start_j > 0) {
            result = returnIfTrue(start_i, start_j, n, m, matrix);
            if(!result) break;
            if(start_j > 0) {
                start_j--;
            }
            else {
                start_i++;
            }
        }
        return result;
    }
};
