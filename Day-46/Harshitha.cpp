#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>


using namespace std;

class Solution {
    public:
    string destCity(vector< vector<string> >& paths)
    {
       unordered_map<string , int>way;
       for(int i = 0 ; i < paths.size() ; i++)
       {
           for(int j = 0 ; j < paths[i].size() ; j++)
           {
               way[paths[i][j]]++;
           }
        }
         vector<string> temp;
        
        /*for(auto i = way.begin(); i != way.end() ; i++)
        cout<<i->first<<" "<<i->second<<'\n';*/
        
        for(auto x: way){
            if(x.second==1){
                temp.push_back(x.first);
        }
        }
        for(int i=0;i<temp.size(); i++)
            for(int j=0;j<paths.size(); j++){
                if(paths[j][1]==temp[i]){
                    //cout<< temp[i];
                    return temp[i];
                }
            }
     
    
    }
};


int main()
{
   vector<vector<string> > paths  {{"B", "C"}, {"D","B"} , {"C","A"}};
   Solution sol;
   string alone;
   alone = sol.destCity(paths);
   cout<<alone<<'\n';
   

}