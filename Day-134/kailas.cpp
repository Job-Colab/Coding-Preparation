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
       arr.insert(arr.begin(),1);
       return arr;
    }
};
