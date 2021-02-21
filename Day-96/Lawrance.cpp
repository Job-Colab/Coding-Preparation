int maxSubarraySum(int arr[], int n){
    int maxVal = INT_MIN;
    int tempMax = 0;
    for(int i = 0; i < n; i++) {
        tempMax = max(arr[i], tempMax + arr[i]);
        if(tempMax > maxVal) {
            maxVal = tempMax;
        }
    }
    return maxVal;
}
