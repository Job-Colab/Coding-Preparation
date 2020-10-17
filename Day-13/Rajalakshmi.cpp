#include<bits/stdc++.h>
using namespace std;

int removeElement(vector<int>& nums, int val) {
        vector<int> a;
        int n=nums.size(),i;
        for(i=0;i<n;i++)
        {
            if(nums[i]==val)
                continue;
            else
                a.push_back(nums[i]);
        }
        nums.clear();
        int ans=a.size();
        for(i=0;i<ans;i++)
            nums.push_back(a[i]);
        
        return ans;
    }
int main()
{
    vector<int> a={3,2,2,3};
    int ans = removeElement(a,3);
    cout<<ans;
}