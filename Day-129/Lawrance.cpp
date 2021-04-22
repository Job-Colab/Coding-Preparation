class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        int answer = 0;
        for(int i : array) {
            answer ^= i;
        }
        for(int i = 1; i <= n; i++) {
            answer ^= i;
        }
        return answer;
    }
};
