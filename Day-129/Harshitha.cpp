class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
       
       int ans = 0;
       int sum0 = (n * (n + 1)) / 2;
       int sum1 = accumulate(array.begin() , array.end() , 0);
       ans = sum0 - sum1;
       
       return ans;
    }
};
//Optimal Solution to combat overflow will be uploaded soon
