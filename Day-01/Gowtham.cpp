#include <iostream>
using namespace std;

int A[100][100],B[100][100],C[100][100],order;

void getMat(char Mat){
	
	for(int i=0;i<order;i++){
		for(int j=0;j<order;j++){
			if(Mat == 'A'){
				cin>>A[i][j];
			}
			else {
				cin>>B[i][j];
			}
		}
	}
	cout<<endl;
}

void Multiply(){
	
	for(int i=0;i<order;i++){
		for(int j=0;j<order;j++){
			C[i][j] = 0;
			for(int k=0;k<order;k++){
				C[i][j] += A[i][k]*B[k][j];
			}
			cout<<C[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main() {
    
    cout<<"Enter the order of the matrix : ";
    cin>>order;
    
    cout<<"Enter the Matrix A :"<<endl;
    getMat('A');
    
    cout<<"Enter the Matrix B :"<<endl;
    getMat('B');
    
	cout<<"A*B :"<<endl;
	Multiply();
    
    return 0;
}

