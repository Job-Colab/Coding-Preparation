//Leetcode Problem , max in colum and min in a row

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        

    }
};



int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int ans = 0, inc = 0;

        for(int i = 4 ; i <= n; i+=2)
        {
            inc += 1;
            ans += inc;
        }
        cout<<ans<<'\n';
    }
}