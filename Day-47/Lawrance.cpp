class Solution {
public:
    int numFriendRequests(vector<int>& ages) {
        int ans = 0;
        int *arr = new int[121]{0};
        for(int i : ages) {
            arr[i]++;
        }
        
        for(int i = 0; i < 121; i++) {
            int A = arr[i];
            for(int j = 0; j < 121; j++) {
                int B = arr[j];
                if (i * 0.5 + 7 >= j || i < j || i < 100 && 100 < j) continue;
                ans += A * B;
                if(i == j) {
                    ans -= A;
                }
            }
        }
        return ans;
    }
};
