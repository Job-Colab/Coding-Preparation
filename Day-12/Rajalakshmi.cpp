#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int getTwinCount(int n , int a[]) {
        // code here
        int c[100000],i,ans=0;
        for(i=0;i<100000;i++)
            c[i]=0;
        for(i=0;i<n;i++)
            c[a[i]]++;
                
       for(i=0;i<100000;i++)
        {
            if(c[i]!=0)
            {
                if(c[i]%2==0)
                    ans+=c[i];
                else
                    ans+=c[i]-1;
            }
        }
        return ans;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int Arr[N];
        for(int i=0 ; i<N ; i++)
            cin>>Arr[i];

        Solution ob;
        cout << ob.getTwinCount(N,Arr) << endl;
    }
    return 0;
}