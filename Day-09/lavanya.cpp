#include <iostream>
#include<vector>
using namespace std;

void getIp(vector<int> &a,int n){
   int val;
   for(int i=0;i<n;i++){
	        cin>>val;
	        a.push_back(val);
	    } 
}

int main() {
	int test,n,date,i=1,val;
	cin>>test;
	while(i<=test){
	    vector<int> c_no,fine;
	    cin>>n>>date;
	    getIp(c_no,n);
	    getIp(fine,n);
	    int sum=0;
	    if(date%2 == 0){
	        for(int i=0;i<n;i++){
	            if(c_no[i]%2 !=0){
	               sum+=fine[i]; 
	            }
	        }
	    }
	    else{
	      for(int i=0;i<n;i++){
	            if(c_no[i]%2 ==0){
	               sum+=fine[i]; 
	            }
	        }  
	    }
	    cout<<sum<<endl;
	    i++;
	    
	}
}
