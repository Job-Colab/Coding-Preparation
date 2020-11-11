#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n, i, j;
        cin>>n;
        int a[n-1];
        for(i=0; i<n-1; i++)
            cin>>a[i];
            
        int x1 = a[0];
        int x2 = 1;
     
        for (int i = 1; i < n-1; i++)
            x1 = x1 ^ a[i];
     
        for (int i = 2; i <= n; i++)
            x2 = x2 ^ i;
        int ans=x1^x2;
        cout<<ans<<"\n";
    }
	return 0;
}