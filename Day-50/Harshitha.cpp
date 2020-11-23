#include<iostream>
#include<vector>
#include<string>
#include<numeric>
using namespace std;

class Solution {
public:
    int calPoints(vector<string>& ops)
    {
        vector<int>scores;
        for(auto i : ops)
        {
           if(i == "C")
           {
               scores.pop_back();

           }
           else if(i == "D")
           {
               scores.push_back(scores.at(scores.size()-1) * 2);
           }
           else if(i == "+")
           {
               scores.push_back(scores.at(scores.size()-1) + scores.at(scores.size()-2));

           }
           else
           {
               scores.push_back(stoi(i));
           }
        }
        return accumlate(scores.begin() , scores.end(), 0);
    }
};



int main()
{
   vector<string>s = {"5"};
   //cout<<stoi(s[0])<<'\n';
   Solution sol;
   cout<<sol.calPoints(s)<<'\n';
}