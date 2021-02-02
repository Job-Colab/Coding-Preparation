#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t>0)
	{
	   int n,c,j;
	    cin>>n;
	    int arr[n],arr1[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    sort(arr,arr+n);
	    if(n%2!=0)//for odd number of elements
	    {
	          j=0,c=0;
	          for(int i=n-1;i>=0;--i)
	    {
	        if(c==0)
	        {
	        arr1[j]=arr[i];
	        j=j+i;
	        c=1;
	        }
	        else
	        {
	            arr1[j]=arr[i];
	            j=j-i;
	            c=0;
	        }
	        
	    }
	    }
	    else//for even number of elements
      
	    {
	        c=0,j=n-1;
	        for(int i=n-1;i>=0;--i)
	    {
	        if(c==0)
	        {
	        arr1[j]=arr[i];
	        j=j-i;
	        c=1;
	        }
	        else
	        {
	            arr1[j]=arr[i];
	            j=j+i;
	            c=0;
	        }
	        
	    }
	    
	    }
	    for(int i=0;i<n;i++)
	    {
	        cout<<arr1[i]<<" ";
	    }
	    cout<<endl;
	    t--;
	}
	
	return 0;
}
