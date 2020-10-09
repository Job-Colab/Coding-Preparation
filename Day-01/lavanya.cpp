#include <iostream>
using namespace std;

int mat1[100][100], mat2[100][100],res[100][100],N;

void getIp(int arr[][100]){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin>>arr[i][j];
        }
    }
}
void multiply(){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            res[i][j]=0;
            for(int k=0;k<N;k++){
                res[i][j] += mat1[i][k] * mat2[k][j];
            }
            cout<<res[i][j];
        }
        cout<<endl;
    }
}
int main() {
    cin>>N;
    getIp(mat1);
    getIp(mat2);
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<mat1[i][j];
        }
        cout<<endl;
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<mat2[i][j];
        }
        cout<<endl;
    }
    multiply();
    
}
