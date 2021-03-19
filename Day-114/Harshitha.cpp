void miniMaxSum(vector<long int> arr) {
    long int sum1 = 0 , sum2 = 0;
    sort(arr.begin() , arr.end());
    for(int i = 0 ; i < arr.size()-1 ; ++i)
    {
        sum1 += arr[i];
    }
    for(int i = 1 ; i < arr.size() ; ++i)
    {
        sum2 += arr[i];
    }
    cout << sum1 << " " << sum2;
}
