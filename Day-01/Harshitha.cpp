
void multiply(int A[][100], int B[][100], int C[][100], int N)
{
    // C[N][N] = {0}  Cannot be done as C is passed as an argument .. //Taught By Law :)
 
     for(int i = 0 ; i < N ; i++)
     {
         for(int j = 0 ; j < N ; j++)
         {
             C[i][j] = 0;
             for(int k = 0 ; k < N ; k++)
             {
                 C[i][j] += A[i][k] * B[k][j];
             }
         }
     }
     
}
