#include<bits/stdc++.h>
using namespace std;
    int singleNumber(vector<int>& nums) {
        int c[10000],i,ans,n=nums.size();
        for(i=0;i<10000;i++)
            c[i]=0;
        for(i=0;i<n;i++)
            c[nums[i]]++;
        for(i=0;i<10000;i++)
        {
            if(c[i]!=2 && c[i]!=0)
                ans=i;
        }
        return ans;
    }
int main()
{
    vector<int> a={3,2,2};
    int ans = singleNumber(a);
    cout<<ans;
}