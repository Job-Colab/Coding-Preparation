#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
       while(stones.size()>1){
           int n=stones.size();
           int newstone=0;
           sort(stones.begin(),stones.end());
           if(stones[n-1]==stones[n-2]){
               newstone=0;
           }
           else{
               newstone = abs(stones[n-1] - stones[n-2]);
           }
           stones.pop_back();
           stones.pop_back();
           if(newstone!=0){
               stones.push_back(newstone);
           } 
       }
        if(stones.size()==0){
            return 0;
        }
        return stones[0];
    }
};
int main(){
    Solution s;
    vector<int> a={3,7,8};
    cout<<s.lastStoneWeight(a);
}
