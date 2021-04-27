class Solution {
  public:
    vector<int> increment(vector<int> arr ,int N) {
       
       for(int i = N-1 ; i >= 0 ; --i)
       {
           if(arr[i] < 9)
           {
               arr[i]++;
               return arr;
           }
           arr[i] = 0;
       }
       vector<int> ans(N+1);
       ans[0] = 1;
       return ans;
    }
};
