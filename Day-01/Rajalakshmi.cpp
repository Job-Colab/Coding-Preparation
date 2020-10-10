// { Driver Code Starts
#include<iostream>
#include<stdio.h>
using namespace std; 
void multiply(int A[][100], int B[][100], int C[][100], int N);
int main()
{
	int t;
	cin>>t;
	while(t--){
	    int N;
		cin>>N;
		int A[100][100],B[100][100],C[100][100];
		int i, j;
		for(int i = 0; i < N; i++)
		    for(int j = 0 ; j < N; j++)
		        cin>>A[i][j];
		for(int i = 0; i < N; i++)
		    for(int j = 0; j < N; j++)
		        cin>>B[i][j];
		multiply(A, B, C, N);
		for (i = 0; i < N; i++)
		{
			for (j = 0; j < N; j++)
			   cout<<C[i][j]<<" ";
		}
		cout<<endl;
	}
 
    return 0;
}// } Driver Code Ends


/*Complete the function below*/
void multiply(int a[][100], int b[][100], int c[][100], int n)
{
 int i,j,k;
for(i=0;i<n;i++)
    for(j=0;j<n;j++)
        {
            c[i][j]=0;
            for(k=0;k<n;k++)
                c[i][j]+=a[i][k]*b[k][j];
        }
}