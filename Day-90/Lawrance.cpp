vector<int> solve(vector<int>& a, vector<int>& b) {
    vector<int> ans;
    int n = 0;
    int m = 0;
    while(n < a.size() && m < b.size()) {
        if(a[n] < b[m]) {
            ans.push_back(a[n++]);
        }
        else {
            ans.push_back(b[m++]);
        }
    }
    while(n < a.size()) {
        ans.push_back(a[n++]);
    }
    while(m < b.size()) {
        ans.push_back(b[m++]);
    }
    return ans;
}
