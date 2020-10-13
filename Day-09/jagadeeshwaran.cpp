#include <iostream>

using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i = 0 ; i<t ; i++)
    {
        int n,d,sum=0;
        cin>>n>>d;
        int c[n],p[n];
        for(int j = 0 ; j < n ; j++)
        {
            cin>>c[j];
        }
        for(int j = 0 ; j < n ; j++)
        {
            cin>>p[j];
        }
        for(int j = 0 ; j < n ; j++)
        {
            if(d%2 == 0)
            {
                if(c[j]%2 != 0)
                {
                    sum = sum + p[j];  
                }
            }
            else
            {
                if(c[j]%2 == 0)
                {
                    sum = sum + p[j];
                }
            }
        }
        cout<<sum<<"\n";
    }
}
