#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
	vector<int> ans;
        
    for(int i=0; i<nums.size(); i++)
        for(int j=i+1; j<nums.size(); j++)
        {
            if (nums[i]+nums[j]==target)
            {
                ans.push_back(i);
                ans.push_back(j);
                break;
            }
        }
 	return ans; 
}

int main() {
    int n, x, tar, i;
    vector<int> a;
    cin>>n;
    for(i=0; i<n; i++){
        cin>>x;
        a.push_back(x);
    }
        
    cin>>tar;
    
    vector<int> ans = twoSum(a, tar);
    
    cout<<"["<<ans[0]<<", "<<ans[1]<<"]"<<"\n";
    
    return 0;
}
