#include <iostream>
using namespace std;

int peakElement(int arr[], int n)
{

    if (n == 1) 
      return arr[0];
    if (arr[0] >= arr[1])
        return 0;

    for (int i = 1; i < n - 1; i++) {
        if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1])
            return i;
    }
      if (arr[n - 1] >= arr[n - 2])
        return n - 1;
}

int main() {
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << peakElement(arr, n) << endl;
    return 0;
}
