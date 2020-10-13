#include <bits/stdc++.h> 
using namespace std;

class Datas{
	int N;
	int D;
	int C[100000];
	int P[100000];
	int pSum = 0;
	
	public :
		
		Datas(int n,int d,int c[],int p[]){
			N = n;
			D = d;
			
			for(int i=0;i<n;i++){
				C[i] = c[i];
				P[i] = p[i];
			}
		}
		
		int getPSum(){
			for(int i=0;i<N;i++){
				
				if(D%2 == 0){
					if(C[i]%2 == 1)
						pSum += P[i];
				}
				else {
					if(C[i]%2 == 0)
						pSum += P[i];			
				}
			}
			return pSum;	
		} 
};

int num,date,sum,j=0;
int carNums[100000],penalties[100000];
Datas* pData = (Datas*)malloc(sizeof(Datas) * 100);

void getData(){
	cin>>num;
	cin>>date;
	for(int i=0;i<num;i++)
		cin>>carNums[i];
	
	for(int i=0;i<num;i++)
		cin>>penalties[i];
	
	pData[j] = Datas(num,date,carNums,penalties);
}	

int main() {
	
	int T=1;
	
	cin>>T;
    
    for(j;j<T;j++){
    	getData();
    	cout<<endl;
	}
	
	for(int k=0;k<T;k++){
		sum = pData[k].getPSum();
		cout<<sum<<" ";
	}
    
    return 0;
}

