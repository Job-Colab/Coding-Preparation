#include <iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int> nums) {
        int result=0;
        for(int i=0;i<nums.size();i++){
            result ^= nums[i];
        }
        return result;
    }
};

int main() {
	Solution s;
	vector<int> a={4,1,2,1,2};
	cout<<s.singleNumber(a);
}
