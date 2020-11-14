class Solution
{
  public:
    void sortIt(long long arr[], long long n)
    {
        long long int i;
        for(i=0;i<n;i++){
            if(arr[i]%2!=0){
                arr[i]=arr[i]*-1;
            }
        }
            sort(arr,arr+n);
            for(i = 0;i<n;i++){
                if(arr[i]%2!=0){
                    arr[i]*=-1;
                }
            }
        
    }
};
