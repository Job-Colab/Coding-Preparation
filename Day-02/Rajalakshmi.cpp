#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    //you have to type \0 to quit, it keeps taking input otherwise
    do
    {
        cin>>n;
        if(n%2!=0)
            sum+=n;
    }while(n!='\0');
    cout<<sum;
}