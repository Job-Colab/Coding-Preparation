#include<iostream>
using namespace std;

int main()
{
    int a  , b;
    cin>>a>>b;
    int hours = a , new_candles = 0 , rem = 0;

    while(a >= b)
    {
        new_candles = a / b ; 
        hours += new_candles;
        rem = a % b ;
        a = new_candles + rem; 
    }
    cout<<hours<<'\n';
   
    
}