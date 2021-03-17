vector<int> solve(vector<int>& nums) {
    map<int, int> ans;
    set<int, greater<int> > st;
    for(int i : nums) {
        st.insert(i);
    }
    int size = 0;
    for(int i : st) {
        ans.insert({i, size++});
    }
    vector<int> res;
    for(int i : nums) {
        res.push_back((ans.find(i))->second);
    }
    return res;
}
