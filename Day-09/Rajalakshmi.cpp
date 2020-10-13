#include<vector>
#include<iostream>
using namespace std;
int main() {
	//code
	int t,i;
	    cin>>t;
	while(t--)
	{
	    int n,d,fine=0,cn,f;
	    cin>>n>>d;
	    vector<int> carNum,fi;
	    for(i=0;i<n;i++)
	    {
	        cin>>cn;
	        carNum.push_back(cn);
	    }
	    for(i=0;i<n;i++)
	    {
	        cin>>f;
	        fi.push_back(f);
	    }
	    if(d%2==0)
	       {  for(i=0;i<n;i++)
	             if(carNum[i]%2!=0)
	                fine+=fi[i];
	       }
	    else
	    {
	        for(i=0;i<n;i++)
	             if(carNum[i]%2==0)
	                fine+=fi[i];
	    }
	cout<<fine<<endl;
	}
	return 0;
}