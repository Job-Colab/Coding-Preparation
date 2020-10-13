#include <iostream>
#include<vector>
#define endl '\n'
using namespace std;
int main() {
	short signed int t,d;
	cin>>t;
	int n,ototal,etotal,i,j;
	while(t--){
	    vector<int> car,penalty;
	    ototal=etotal=0;
	    int temp;
	    cin>>n>>d;
	    for(i =0;i<n;i++){
	        cin>>temp;
	        car.push_back(temp);
	    }
	    for(i=0;i<n;i++){
	        cin>>temp;
	        penalty.push_back(temp);
	    }
	    for(i=0;i<n;i++){
	        if(car[i]%2==0){
	            etotal+=penalty[i];
	        }
	        else
	            ototal+=penalty[i];
	    }
	    if(d%2==0)
	        cout<<ototal<<endl;
	    else
	        cout<<etotal<<endl;
	}
	return 0;
}
