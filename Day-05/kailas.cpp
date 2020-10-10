#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    int solve(vector<int>& nums) {
        int ans=-1;
        int l,r;
        l=0;
        r=nums.size()-1;
        int mid;
        // binary search
        while(l<=r){
            mid = (l+r)/2;
            if(mid<=nums[mid]){
                r=mid-1;
                if(nums[mid]==mid){
                    ans=mid;
                }
            }
            else if(mid>nums[mid]){
                l=mid+1;
            }
        }
        return ans;
    }
};
int main(){
  Solution obj = new Solution();
  vector<int> ar = {-5, -2, 0, 3, 4 };
  cout<<obj.solve(ar);
  return 0;
}
