class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> first(stones.begin(), stones.end());
        while(first.size() > 1) {
            int one = first.top();
            first.pop();
            int two = first.top();
            first.pop();
            one = one - two;
            if(one != 0) first.push(one);
        }
        return (first.size() == 0) ? 0 : first.top();
    }
};
