#include <iostream>

using namespace std;
void discal(int *adis,int *odis,int a,int b,int m,int n)
{   int i;
    for(i=0;i<m;i++)
    {   adis[i]+=a;   
    }
    for(i=0;i<n;i++)
    {   odis[i]+=b;   
    }

}
int main()
{   int s,t,a,b,m,n;
    int acount=0,ocount=0;
    cout<<"Enter the starting and ending points of the house: ";
    cin>>s>>t;
    cout<<"\n Enter the positions of apple and orange trees respectively: ";
    cin>>a>>b;
    cout<<"\n Enter the number of apples and oranges that fall off the trees respectively: ";
    cin>>m>>n;
    int adis[m],odis[n];
    cout<<"\n Enter the distances at which the apples fall: ";
    for(int i=0;i<m;i++)
    {   cin>>adis[i];   }
    cout<<"\n Enter the distances at which the oranges fall: ";
    for(int i=0;i<n;i++)
    {   cin>>odis[i];   }

    discal(adis,odis,a,b,m,n);
    for(int i=0;i<m;i++)
    {   if(adis[i]>=s)
            acount++;
    }
    for(int i=0;i<n;i++)
    {   if(odis[i]<=t)
            ocount++;
    }
    cout<<"\n Number of apples that fall into Sam's house is: "<<acount;
    cout<<"\n Number of oranges that fall into Sam's house is: "<<ocount;

    
}
