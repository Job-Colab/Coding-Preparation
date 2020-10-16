class Solution {
  public:
    int getTwinCount(int N , int Arr[]) {
        int *arr = new int[100000]{0};
        int pairs = 0;
        for(int i = 0; i < N; i++) {
            arr[Arr[i]]++;
            if(arr[Arr[i]] % 2 == 0) {
                pairs += arr[Arr[i]];
                arr[Arr[i]] = 0;
            }
        }
        return pairs;
    }
};
