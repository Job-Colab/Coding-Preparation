#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
  //write your code here
  short int t;
  ll n,sum,temp;
  cin>>t;
  while(t--){
    sum=0;
    //vector<ll> ar;
    cin>>n;
    for(ll i=0;i<n-1;i++){
      cin>>temp;
      sum=sum+temp;
    }
    ll ex_sum = (n*(n+1))/2;
    //cout<<ex_sum<<" "<<sum;
    ex_sum=ex_sum-sum;
    cout<<ex_sum<<"\n";
  }
  return 0;
}
