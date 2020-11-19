class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        map<string, string> arr;
        for(auto i : paths) {
            arr[i[0]] = i[1];
        }
        string ans;
        string toCheck = paths[0][0];
        while(true) {
            auto iter = arr.find(toCheck);
            if(iter == arr.end()) {
                ans = toCheck;
                break;
            }
            else {
                toCheck = iter->second;
            }
        }
        return ans;
    }
};
