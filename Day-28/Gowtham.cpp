#include <bits/stdc++.h> 
using namespace std;

int N;
int Days[200];
int freeFood[365]={0};

void getDays(){
	
	for(int i=0;i<2*N;i++)
		cin>>Days[i];
				
}
void getFreeFoods(){
	
	for(int j=0;j<2*N;j+=2){
		for(int s=Days[j];s<=Days[j+1];s++){
			if(freeFood[s-1]==0){
				freeFood[s-1] = 1;
			}
		}
	}
}

int main() {
	 
	cin>>N;
	 
	getDays(); 
	
	getFreeFoods();
	
	
	int count=0;
	
	
	for(int i=0;i<365;i++){
		if(freeFood[i]==1)
			count++;
	}
		
	cout<<count;
	    
    return 0;
}

