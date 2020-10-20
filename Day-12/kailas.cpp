#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int getTwinCount(int N , int Arr[]) {
        // code here
        int a[1000000]={};
        int count=0,inde;
        for(int i=0;i<N;i++){
            inde=Arr[i];
            a[inde]++;
            if(a[inde]==2){
                count++;
                a[inde]-=2;
            }
        }
        return count*2;
        
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        int Arr[N];
        for(int i=0 ; i<N ; i++)
            cin>>Arr[i];

        Solution ob;
        cout << ob.getTwinCount(N,Arr) << endl;
    }
    return 0;
}
