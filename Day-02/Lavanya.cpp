#include<iostream>
using namespace std;
int main()
{
    int sum=0,i=0,a,n;
    cin>>n;
    while(i<n){
        cin>>a;
        if(a%2 != 0){
            sum+=a;
        }
        i++;
    }
    cout<<sum;
}
