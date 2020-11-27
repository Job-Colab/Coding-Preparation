class Solution {
public:
    int countIt(int n) {
        int count = 0;
        while(n) {
            count += (n & 1);
            n = n >> 1;
        }
        return count;
    }
    vector<int> countBits(int num) {
        vector<int>ans;
        ans.push_back(0);
        for(int i = 1; i <= num; i++) {
            ans.push_back(countIt(i));
        }
        return ans;
    }
};
