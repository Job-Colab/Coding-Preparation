#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
        cin>>t;
    while(t--)
    {
        int sh,sm,eh,em;
        char c;
        cin>>sh; //start
            cin>>c;
        cin>>sm; //end
        cin>>eh;
            cin>>c;
        cin>>em;
        
        int m = eh*60+em-sh*60-sm;
        if(m<0)
            m+=24*60;
        int h = m/60;
        m-= h*60;
        
        cout<<h<<" hours "<<m<<" minutes"<<endl;
    }
    return 0;
}
