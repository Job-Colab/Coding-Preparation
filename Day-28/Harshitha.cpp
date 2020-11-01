#include<iostream>
#include<set>
using namespace std;

int main()
{
    int N;
    cin>>N;

    set<int>events;
    while(N--)                 //Law's simple solution      
    {
        //int events[365] = {0};
        int s , t , ans = 0;   
        cin>>s>>t;

        for(int i = s ; i <= t ; i++)      
        {
            //if(events[i] == 0)
        /*{
            events[i]++;
            ans++;
        }*/
            events.insert(i); 
        }
    
    }
    cout<<events.size()<<'\n'; //cout<<ans<<'\n';
    
}



