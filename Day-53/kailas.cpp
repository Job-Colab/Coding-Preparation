class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector <int> arr;
        int count = 0;
        arr=heights;
        sort(arr.begin(),arr.end());
        for(int i = 0;i<heights.size();i++){
            if(arr[i]!=heights[i])
                count++;
    }
    return count;
}
};
