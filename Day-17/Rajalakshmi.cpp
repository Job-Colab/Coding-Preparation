#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	        cin>>n;
	   
	    int a[n],ans[n],k=0,i;
	    for(i=0;i<n;i++)
	        cin>>a[i];
	    for(i=0;i<n/2+1;i++)
	    {
	        ans[k++]=a[n-i-1];
	        ans[k++]=a[i];
	        
	    }
	    for(i=0;i<n;i++)
	        {
	        a[i]=ans[i];
	        cout<<ans[i]<<' ';
	        }
	        cout<<endl;
	}
	return 0;
}