#include <iostream>

using namespace std;
int main()
{   int numBottles, numExchange, count, rem;
    cout<<"\n Enter the total number of full bottles: ";
    cin>>numBottles;
    cout<<"\n Enter the number of empty bottles that can be clubed into 1 full bottle: ";
    cin>>numExchange;
    int num=numBottles;
    while(count != 0)  
    {   count=numBottles/numExchange;
        num+=count;
        rem=numBottles%numExchange;
        numBottles=count+rem;
    }
    cout<<"\n Maximum number of drinkable water for the given data is: "<<num;
    
}
