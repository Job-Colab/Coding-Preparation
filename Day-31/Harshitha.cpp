#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      long long n;
      cin>>n;
      
      long long array[n-1] ;
      for(int i = 0 ; i < n-1 ; i++)
      {
        cin>>array[i];
      }
      
      n = (n * (n + 1)) / 2;
      //cout<<n<<'\n';
      
      for(int i = 0 ; i < n; i++)
      {
        n = abs(n-array[i]);
      }
      cout<<n<<'\n';
    }
  
  return 0;
}