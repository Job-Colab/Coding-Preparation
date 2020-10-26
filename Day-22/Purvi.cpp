#include <bits/stdc++.h>
using namespace std;

int main()
{
				long int s, t, a, b, m, n;
				long long int dista[100000], disto[1000000];
				cin>>s>>t>>a>>b>>m>>n;
				for(int i=0; i<m; i++)
								cin>>dista[i];
				for(int j=0; j<n; j++)
								cin>>disto[j];
				int i, j=0, x, y=0;
				for(int i=0; i<m; i++)
					if ((a+dista[i])>=s && (a+dista[i])<=t)
						++j;
				for (int x = 0; x < n; x++)
					if ((b+ disto[x]) >= s && (b + disto[x]) <= t)
						++y;
				cout<<j<<"\n"<<y;
}
