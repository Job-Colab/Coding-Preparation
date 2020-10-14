void multiply(int A[][100], int B[][100], int C[][100], int N)
{
      
      int i,j,K;
      for(int i=0;i<N;i++)
      {
          for(int j=0;j<N;j++)
          {
              C[i][j]=0;
                for(int K=0;K<N;K++)
                {        
                     C[i][j]+=A[i][K]*B[K][j];
                }
          }
               
      }
}
