#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, s=0;
	cin>>n;
	while(n!='\0')
    {
        if(n%2!=0)
            s+=n;
        cin>>n;
    }
	cout<<s;
	return 0;
}
