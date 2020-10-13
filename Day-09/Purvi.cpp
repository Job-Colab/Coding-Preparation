#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n, d, i, s=0;
	    cin>>n>>d;
	    int cnums[n], pens[n];
	    for(i=0; i<n; i++)
	        cin>>cnums[i];
	    for(i=0; i<n; i++)
	        cin>>pens[i];
	    if(d%2==0)
	        for(i=0; i<n; i++){
	            if(cnums[i]%2!=0){
	                s+=pens[i];
	            }
	        }
	    else
	        for(i=0; i<n; i++){
	            if(cnums[i]%2==0)
	                s+=pens[i];
	            }
	    cout<<s<<"\n";
	}
	return 0;
}
