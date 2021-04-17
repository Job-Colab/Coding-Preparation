vector<int>* formGraph(vector<vector<int>>& relations) {
    vector<int> *graph = new vector<int>[relations.size() + 1];
    for(auto vt : relations) {
        graph[vt[0]].push_back(vt[1]);
    }
    return graph;
}

vector<int> solve(vector<vector<int>>& relations) {
    auto graph = formGraph(relations);
    set<int> ans;
    for(auto vt : relations) {
        auto one = graph[vt[0]];
        auto two = graph[vt[1]];
        bool found = false;
        for(int i : two) {
            if(i == vt[0]) {
                found = true;
            }
        }
        if(found) {
            ans.insert(vt[0]);
            ans.insert(vt[1]);
        }
    }
    return vector<int>(ans.begin(), ans.end());
}
