// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
vector<vector<string> > Anagrams(vector<string>& string_list) ;

 // } Driver Code Ends


//User function Template for C++

vector<vector<string> > Anagrams(vector<string>& string_list) 
{
   vector<vector<string>> ans;
   unordered_map<string,vector<string>> ar;
   for(auto a : string_list){
       string i=a;
       sort(i.begin(),i.end());
       auto id = ar.find(i);
       if(id==ar.end()){
           vector<string> temp;
           temp.push_back(a);
           ar.insert({i,temp});
       }
       else
           id->second.push_back(a);
   }
    ar.reserve(ar.size());
    for(auto i :ar){
        ans.push_back(i.second);
    }
    return ans;
}

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string> string_list(n);
        for (int i = 0; i < n; ++i)
            cin>>string_list[i]; 
        vector<vector<string> > result = Anagrams(string_list);
        sort(result.begin(),result.end());
        for (int i = 0; i < result.size(); i++)
        {
            for(int j=0; j < result[i].size(); j++)
            {
                cout<<result[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    return 0;
}
  // } Driver Code Ends
