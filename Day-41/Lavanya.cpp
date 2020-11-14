class Solution
{
  public:
    void sortIt(long long arr[], long long n)
    {
        vector<long> odd;
        vector<long> even;
        vector<long> op;
        for(int i=0;i<n;i++){
            if(arr[i]%2 !=0){
                odd.push_back(arr[i]);
            }
            else{
                even.push_back(arr[i]);
            }
        }
        sort(odd.begin(),odd.end());
        sort(even.begin(),even.end());
        for(int i= odd.size()-1; i>=0; i--){
            op.push_back(odd[i]);
        }
        for(int i= 0; i<even.size(); i++){
            op.push_back(even[i]);
        }
        for(int i= 0; i<n; i++){
            arr[i] = op[i];
        }
    }
};
