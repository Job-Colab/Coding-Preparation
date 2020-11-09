#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans=0,s,t,i;
    cin>>n;
    int c[10000]={0};
    while(n--)
    {
        cin>>s>>t;
        for(i=s;i<=t;i++)
            {
                if(c[i]==0)
                    c[i]++;
            }
    }
    for(i=0;i<10000;i++)
        if(c[i]==1)
            ans++;
    cout<<ans;
}