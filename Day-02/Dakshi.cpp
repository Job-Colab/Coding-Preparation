#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,t;
    cin>>n;
    int arr[n];
    for(int t=0;t<n;t++)
    {
        cin>>arr[t];
    }
    for(t=0;t<=n;t++)
    {
    if(t%2!=0)
    {
        sum=sum+t;
    }
    cout<<t;
    }
    return 0;
};
