#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t>0)
	{
	    int n,d,fine=0;
	    cin>>n>>d;
	    int car[n],cost[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>car[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        cin>>cost[i];
	    }
	    if(d%2==0)
	    {
	        for(int i=0;i<n;i++)
	        {
	          if(car[i]%2!=0)
	          {
	              fine+=cost[i];
	          }
	        }
	    }
	    else
	    {
	        for(int i=0;i<n;i++)
	        {
	          if(car[i]%2==0)
	          {
	              fine+=cost[i];
	          }
	        }
	    }
	    cout<<fine<<"\n";
	    t--;
	}
	
	return 0;
