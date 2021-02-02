#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int T=1;
	cin>>T;
	
	for(int i=0; i<T; i++) {
	  int n;
	  cin>>n;
	  
	  int Array[n],Output[n];
	  for(int j=0; j<n; j++) 
	      cin>>Array[j];
	 
	  sort(Array,Array+n);
	  
	  int index;
	  
	  if(n%2==1)
	    index = (n-1)/2;
	  else
	    index = (n-2)/2;       
	  
	  for(int k=0; k<n; k++) {
	          Output[index] = Array[k];
	          
	          if(k%2==0)
	            index = index + k+1;
	          else
	            index = index - (k+1);
	      }
	  
	  for(int l=0; l<n; l++)
	    cout<<Output[l]<<" ";
	  
	  cout<<endl;
	}
	return 0;
}
