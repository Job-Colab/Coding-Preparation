#include <bits/stdc++.h> 
using namespace std;

int r,c;
int grid[100][100];


void getGrid(){
	
	for(int i=0;i<r;i++)
		for(int j=0;j<c;j++)
			cin>>grid[i][j];	
			
}

int main() {
	 
	cin>>r;
	 
	cin>>c; 
	
	getGrid();
	
	int count=0;
	
	for(int i=0;i<r;i++)
		for(int j=0;j<c;j++)
			if(grid[i][j]<0)
				count++;		
		
	cout<<count;
	    
    return 0;
}

