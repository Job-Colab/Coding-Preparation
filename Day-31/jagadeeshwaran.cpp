#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t-- )
    {
        long int n;
        cin >> n;
        long int n_res = (n*(n+1))/2;
        long int temp;
        for(int i = 0 ; i < n-1 ; i++)
        {
            cin>>temp;
            n_res = n_res - temp;
        }
        cout<<n_res<<endl;
    }  
}
