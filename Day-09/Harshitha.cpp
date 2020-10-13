
#include<iostream>
using namespace std;

int main()
{
    int testCase;
    cin>>testCase;
    
    while(testCase--)
    {
    int N , D;
    cin>>N;
    cin>>D;
    
    int cars[N] , penalty[N] ;
    
    for(int i = 0 ; i < N ; i++)
    {
        cin>>cars[i];
    }
    
    for(int i = 0 ; i < N ; i++)
    {
        cin>>penalty[i];
    }
    
    int fine = 0;
    
    for(int i = 0 ; i < N ; i++)
    {
       if(D % 2 == 0) //even
       {
       if(cars[i] % 2 != 0)
       {
       
           fine += penalty[i];
       }
       }
       
       if( D % 2 != 0)
       {   
           if(cars[i] % 2 == 0) 
           {
           
           fine += penalty[i];  
           }
       }
    
    
    }
    cout<<fine<<'\n';
}
}
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
