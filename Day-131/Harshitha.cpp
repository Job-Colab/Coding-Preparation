class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int size = nums1.size();
        int i = 0;
        int j = 0;
        int k = 0;
        vector<int> arr(m + n);
        while(i < m && j < n) {
            if(nums1[i] <= nums2[j]) {
                arr[k] = nums1[i++];
            }
            else {
                arr[k] = nums2[j++];
            }
            ++k;
        }
        while(i < m) {
            arr[k++] = nums1[i++];
        }
        while(j < n) {
            arr[k++] = nums2[j++];
        }
        nums1 = arr;
    }
};
