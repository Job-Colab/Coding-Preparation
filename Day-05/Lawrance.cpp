#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int solve(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;
        int ans = INT_MAX;
        while(left <= right) {
            int middle = (left + right) / 2;
            if(nums[middle] == middle) { /* Whenever the condition being satisfied (i.e. nums[i] == i) */
                ans = min(ans, middle);  /* The value will be taken in account but still thats not the answer because there still be a minimum value */
                right = middle - 1;      /* So fixing the right value as middle - 1 because we need to check whether there is a small element than the value we found */
            }
            else if(nums[middle] < middle) { // Normal Binary Search Stuff
                left = middle + 1;
            }
            else {                           // Normal Binary Search Stuff
                right = middle - 1;
            }
        }
        return (ans == INT_MAX) ? -1 : ans; /* If the ans == INT_MAX means that answer is not updated so return -1 else return the answer */
    }
};

int main() {
    Solution sol;
    vector<int> test = {1,2,3,4,5,6,7};
    cout << sol.solve(test) << endl;
    return 0;
}
