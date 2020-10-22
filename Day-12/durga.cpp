#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t>0)
	{
	    int n,c=0;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    sort(arr,arr+n);
	    for(int i=0;i<n-1;i++)
	    {
	        if(arr[i]==arr[i+1])
	        {
	            c=c+2;
	            i=i+1;
	        }
	    }
	    cout<<c<<"\n";
	    t--;
	}
	return 0;
}
