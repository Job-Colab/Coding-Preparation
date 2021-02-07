#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &arr) {
    int index = 0;
    if(!arr.size()) return index;
    for (int i = 0; i < arr.size(); i++) {
        if(arr[index] != arr[i]) {
            arr[++index] = arr[i];
        }
    }
    return index + 1;
}

int main() {
    vector<int> arr = {1, 1, 2};
    int newLength = removeDuplicates(arr);
    for(int i = 0; i < newLength; i++) cout << arr[i] << " ";
    cout << endl;
    return 0;
}
