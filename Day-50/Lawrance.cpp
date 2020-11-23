class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int>ans;
        for(auto i : ops) {
                cout << i << endl;
                if (i == "+")
                    ans.push_back(ans.at(ans.size() - 1) + ans.at(ans.size() - 2));
                else if (i == "D")
                    ans.push_back(ans.at(ans.size() - 1) * 2);
                else if (i == "C")
                    ans.pop_back();
                else
                    ans.push_back(stoi(i));
            }
        return accumulate(ans.begin(), ans.end(), 0);
    }
};
