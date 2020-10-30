#include<iostream>
using namespace std;

class Solution {
public:
    string defangIPaddr(string address)
    {
      string defanged = address;
        for(int i = 0 ; i < address.length() ; i++)
        {
            if(address[i] == '.' )
            {
              if(i != address.size() - 1)
              {
              address.replace(i , 1 ,  "[.]");
              i+= 3; //find next '.'
              }
            }
            //cout<<address<<'\n';
            //cout<<address.size()<<'\n';
             
        }
       
       return address;
    }
};

int main()
{
   string ip = "1.1.1.1";
   Solution sol ;
   cout<<sol.defangIPaddr(ip);
}