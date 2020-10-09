#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int solve(vector<int>& nums) {
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == i ){
                ans.push_back(nums[i]);
            }
        }
        sort(ans.begin(),ans.end());
        if(ans.size()<1){
            return -1;
        }
        else{
            return ans[0];
        }
}
int main(){
    vector<int> a = {1,1,2,4};
    cout<<solve(a);
}
