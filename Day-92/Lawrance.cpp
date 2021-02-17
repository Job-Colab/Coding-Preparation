void SortedStack :: sort()  {
    int size = s.size();
    int *arr = new int[size];
    int i = 0;
    while(!s.empty()) {
        arr[i++] = s.top();
        s.pop();
    }
    ::sort(arr, arr + size);
    for(int i = 0; i < size; i++)  {
        s.push(arr[i]);
    }
}
