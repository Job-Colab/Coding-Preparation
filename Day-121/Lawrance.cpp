class WordDistanceQuerier {
    private:
    multimap<string, int> words;
    public:
    WordDistanceQuerier(vector<string>& words) {
        for(size_t i = 0; i < words.size(); i++) {
            this->words.insert({words[i], i});
        }
    }

    int distance(string a, string b) {
        auto itOne = words.equal_range(a);
        auto itTwo = words.equal_range(b);
        vector<pair<string, int> > one(itOne.first, itOne.second);
        vector<pair<string, int> > two(itTwo.first, itTwo.second);
        int minDistance = INT_MAX;
        for(auto i : one)  {
            for(auto j : two) {
                minDistance = min( abs(i.second - j.second), minDistance);
            }
        }
        return minDistance;
    }
};
