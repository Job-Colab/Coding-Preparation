class Solution {
public:
    unordered_map<char,string> mp;
    vector<string> returnVal(char number, vector<string>&ans) {
        string perm = mp[number];
        vector<string>tempAns;
        if(ans.empty()) {
            for(char i : perm) {
                string temp;
                temp.push_back(i);
                tempAns.push_back(temp);
            }
        }
        else {
            for (char prefix : perm) {
                for (const string &j : ans) {
                    string temp;
                    temp.push_back(prefix);
                    temp += j;
                    tempAns.push_back(temp);
                }
            }
        }
        ans = tempAns;
        return ans;
    }
    vector<string> findAnswer(string digits) {
        vector<string> ans = {};
        for(auto i = digits.rbegin(); i != digits.rend(); i++) {
            ans = returnVal(*i, ans);
        }
        return ans;
    }
    vector<string> letterCombinations(string digits) {
        mp.insert({'2',"abc"});
        mp.insert({'3',"def"});
        mp.insert({'4',"ghi"});
        mp.insert({'5',"jkl"});
        mp.insert({'6',"mno"});
        mp.insert({'7',"pqrs"});
        mp.insert({'8',"tuv"});
        mp.insert({'9',"wxyz"});
        return findAnswer(digits);
    }
};
