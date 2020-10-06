#include<iostream>
#include<string>
using namespace std;
int main(){
    string time;
    cin>>time;
    string zone(time,5,2);
    int hour = stoi(string(time,0,2));
    int min = stoi((string(time,3,2)));
    string rhour,rmin=string(time,3,2);
    string a = "am",p="pm";
    if(zone==a){
        if(hour==12){
            rhour = "00";
        }
        else{
            rhour=string(time,0,2);
        }
    }
    else if(zone==p){
        if(hour==12){
            rhour = "12";
        }
        else{
            hour=hour+12;
            rhour=to_string(hour);
        }
    }
    cout<<"\""<<rhour<<":"<<rmin<<"\"";
    return 0;
}
