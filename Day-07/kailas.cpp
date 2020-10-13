#include<iostream>
#include<vector>
#include<typeinfo>
#include<string>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans ="";
        int i,j;
        if(strs.size()==0)
            return "";
        for(i=0;i<strs[0].size();i++){
            for(j=1;j<strs.size();j++){
                if(strs[0][i]!=strs[j][i]){
                    return ans;
                }
            
        }
            ans+=strs[0][i];
    }
        return ans;
    }
};
int main(){
    vector<string> ar={"flow","f","flight","flower"};
    Solution *obj=new Solution;
    string a = obj->longestCommonPrefix(ar);
    cout<<a;
    return 0;
}
