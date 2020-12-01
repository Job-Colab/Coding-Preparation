#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ll a, b, c, d, r;
	cin>>a>>b;
	c=a;
	while(a>=b){
		d=a/b;
		c+=d;
		r=a%b;
		a=d+r;
	}
	cout<<c;
}