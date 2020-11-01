#include <iostream>
using namespace std;

int main() {
    int arr[366]={};
    int t,n1,n2,count=0;
    cin>>t;
    while(t--){
        cin>>n1>>n2;
        for(int i=n1;i<=n2;i++){
            arr[i]++;
        }
    }
    for(int i=0;i<366;i++){
            if(arr[i]>0){
                count++;
            }
    }
    cout<<count;
    
}
