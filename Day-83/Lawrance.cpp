class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        if(!arr.size()) return 0; 
        int index = 0;
        for (int i = 0; i < arr.size(); i++) {
            if(arr[index] != arr[i]) {
                arr[++index] = arr[i];
            }
        }
        return index + 1;
    }
};
