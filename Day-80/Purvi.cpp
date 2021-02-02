#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n, i, s, fwd, bwd;
	    cin>>n;
	    if(n%2!=0)
	    	s=n/2;
	    else
	    	s=(n-1)/2;
	    fwd=bwd=s;
	    int a[n], b[n]={0};
	    for(i=0; i<n; i++)
	        cin>>a[i];
	    sort(a, a+n);
	    b[s]=a[0];
	    for(i=1; i<n; i++){
	    	if(i%2==0)
	    		b[--bwd]=a[i];
	    	else
	    		b[++fwd]=a[i];
	    }
	    for(i=0; i<n; i++)
	    	cout<<b[i]<<" ";
	    cout<<"\n";
	}
	return 0;
}