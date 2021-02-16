#include <bits/stdc++.h>
#define MOD_NUMBER 1000000001
using namespace std;


vector<vector<string> > Anagrams(vector<string>& string_list) {
    vector<vector<string> > ans;
    unordered_map<string, vector<string> > hash;
    for(auto i : string_list) {
        string j = i;
        sort(i.begin(), i.end());
        auto k = hash.find(i);
        if(k == hash.end()) {
            vector<string> str;
            str.push_back(j);
            hash.insert({i, str});
        }
        else {
            k->second.push_back(j);
        }
    }
    ans.reserve(hash.size());
    for(auto i : hash) {
        ans.push_back(i.second);
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<string> arr;
    for(int i = 0; i < n; i++) {
        string temp;
        cin >> temp;
        arr.push_back(temp);
    }
    auto res = Anagrams(arr);
    for(auto i : res) {
        for(auto j : i) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
