#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int a = 0;
        for(int i : nums) {
            a ^= i;
        }
        return a;
    }
};

int main() {
    Solution sol;
    vector<int>test = {1, 1, 3, 3, 2};
    cout << sol.singleNumber(test) << endl;
    return 0;
}
