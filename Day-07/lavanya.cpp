#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        if(strs.size()==0)
            return ans;
        for(int i=0; i< strs[0].size();i++){
            int j=1;
            for(; j<strs.size() && strs[j].size() > i; j++){
                if(strs[0][i] != strs[j][i])
                    return ans;
            }
             if(j == strs.size()){
                    ans+= strs[0][i];
                }
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<string> str = {"flower","flow","flight"};
    cout<<s.longestCommonPrefix(str);

}
