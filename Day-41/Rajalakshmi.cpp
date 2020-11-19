// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends





class Solution
{
  public:
    void sortIt(long long arr[], long long n)
    {
        //code here.
        int i;
        vector<int> eve,odd,ans;
        for(i=0;i<n;i++)
            {
                if(arr[i]%2==0)
                    eve.push_back(arr[i]);
                else
                    odd.push_back(arr[i]);
            }
            int k=0;
            sort(odd.begin(),odd.end(),greater<int>());
            sort(eve.begin(),eve.end());
            for(i=0;i<odd.size();i++)
                arr[k++]=odd[i];
            for(i=0;i<eve.size();i++)
                arr[k++]=eve[i];
                
    }
};


// { Driver Code Starts.
int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long arr[n];

        for (int i = 0; i < n; i++) 
            cin >> arr[i];
        
        Solution ob;
        ob.sortIt(arr, n);

        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends