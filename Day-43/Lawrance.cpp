#include<bits/stdc++.h>
using namespace std;

int peakFinder(int *arr, int low, int high, int n) {
    int mid;
    while(high >= low) {
        mid = (low + high) / 2;
        if((mid == 0 || arr[mid] >= arr[mid-1]) &&
           (mid == n - 1 || arr[mid] >= arr[mid+1])) break;
        else if(mid > 0 && arr[mid] < arr[mid - 1]) high = mid - 1;
        else low = mid + 1;
    }
    return mid;
}

int peakElement(int arr[], int n) {
    return peakFinder(arr, 0, n - 1, n);
}

int main(int argc, char *argv[]) {
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << peakElement(arr, n) << endl;
    return 0;
}
