#include <iostream>
#include<string>

using namespace std;



    string solve(string s) 
    {
    string hour_string=s.substr(0,2);
    int hour=stoi(hour_string);
    size_t pos =s.find("PM");
    if(pos !=string::npos)
    { if(hour+12 < 24)
         hour_string=to_string(hour+12);
    }
    else{
        if(hour==12)
        hour_string="00";
    }
    return s.replace(0,2,hour_string).erase(s.size()-2);
    }
    
    
    int main()
    {
        string s;
        
        getline(cin,s);
        
       string result = solve(s);
        cout<< "S:"<<result <<"\n";
        return 0;
    }
