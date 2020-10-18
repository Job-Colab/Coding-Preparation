class Solution {
  public:
    int getTwinCount(int N , int Arr[])
    {
        sort(Arr , Arr+N);
        int count  = 0;
        
        for(int i = 0 ; i < N - 1; i++)
        {
            if(Arr[i] == Arr[i + 1])
            {
                count += 2;
                i++;
            }
            
        }
        return count ;
    }
};