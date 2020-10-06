//Sum of odd numbers in a list

#include<iostream>
using namespace std;

int main()
{
    int n , sum = 0;
    cin>>n;
    int array[n];

    for(int i = 0 ; i < n ; i++)
    cin>>array[i];

    for(int i = 0 ; i < n ; i++)
    {
       if(array[i] % 2 != 0)
       sum += array[i];
    
    }
    cout<<sum<<'\n';
}