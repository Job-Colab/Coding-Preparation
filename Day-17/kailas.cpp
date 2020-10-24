#include <iostream>
#include <vector>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long int t,n,i,j;
	cin>>t;
	while(t--){
	   cin>>n;
	   long int temp;
	   vector<long int> ar;
	   for(i=0;i<n;i++){
	       cin>>temp;
	       ar.push_back(temp);
	   }
	   long int count=0;
	   long int check =n/2;
	   for(long int t=0;t<n/2;t++){
	       long int temp =ar[n-1];
	       for(long int start=n-1;start>count;start--){
	           ar[start]=ar[start-1];
	       }
	       ar[count]=temp;
	       count+=2;
	   }
       for(i=0;i<n;i++){
           cout<<ar[i]<<" ";
       }
       cout<<"\n";
    }
	return 0;
}
