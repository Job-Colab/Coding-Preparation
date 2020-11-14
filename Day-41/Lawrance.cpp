
class Solution
{
  public:
    void sortIt(long long arr[], long long n)
    {
        long long j = 0;
        for(long long i = 0; i < n; i++) {
            if(arr[i] % 2) {
                swap(arr[i], arr[j++]);
            }
        }
        sort(arr, arr + j, greater<long long>());
        sort(arr + j, arr + n);
    }
};
