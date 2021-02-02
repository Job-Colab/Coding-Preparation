#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,temp;
	    cin>>n;
	    vector <int> ar;
	    for(int i = 0;i<n;i++){
	        cin>>temp;
	        ar.push_back(temp);
	    }
	    sort(ar.begin(),ar.end());
	    int inde,end;
	    if(n%2!=0){
	        inde = n-1;
	    }
	    else
	        inde = n-2;
	    while(inde>=0){
	        cout<<ar[inde]<<" ";
	        inde-=2;
	    }
	    inde =1;
	    if(n%2!=0){
    	        while(inde<n){
    	        cout<<ar[inde]<<" ";
    	        inde+=2;
    	    }
	    }
	    else{
	        while(inde<=n){
	        cout<<ar[inde]<<" ";
	        inde+=2;
	    }
	    }
	    
	    cout<<endl;
	}
	return 0;
}
