#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &nums) {
  int ans = 0;
  int left = 0;
  int right = nums.size() - 1;
  int maxFromLeft = -1;
  while (left < right) {
    int currentMin = min(nums.at(left), nums.at(right));
    maxFromLeft = max(maxFromLeft, currentMin);
    ans += maxFromLeft - currentMin;
    if (nums.at(left) <= nums.at(right)) {
      ++left;
    } else {
      --right;
    }
  }
  return ans;
}

int main() {
  vector<int> arr = {2, 5, 2, 0, 5, 8, 8};
  cout << solve(arr) << endl;
  return 0;
}
