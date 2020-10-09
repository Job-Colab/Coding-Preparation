#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int solve(vector<int>& nums)
    {
       int left = 0;
       int right = nums.size() - 1;
       int ans = -1;
       
       while(left <= right)
       {
          int mid = ( left + right) / 2 ;
          if(nums[mid] == mid)
          {
          ans = mid;
          right = mid -1;
           
          }
          
          else if(mid > nums[mid])
          left = mid + 1;  //right half
          
          else if(mid < nums[mid])
          right = mid - 1;//left half
       }
       return ans;
       
    }  
        
            
};

int main()
{
    int n;
    cin>>n;

    vector<int>nums(n); 
    for(int i = 0 ; i < nums.size() ;i++)
    cin>>nums[i];

    Solution sol;
    int ans = sol.solve(nums);

    cout<<ans<<'\n';


}