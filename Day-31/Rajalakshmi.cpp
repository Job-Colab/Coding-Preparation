#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int t,i;
  cin>>t;
  while(t--)
  {
  int n;
    cin>>n;
  int c[n+1]={0},a[n-1];
  for(i=1;i<n;i++)
    cin>>a[i];
  for(i=1;i<n;i++)
    c[a[i]]++;
  for(i=1;i<=n;i++)
    if(c[i]!=1)
      cout<<i<<endl;
  }
  
}