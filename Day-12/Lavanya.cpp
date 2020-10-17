class Solution {
  public:
    int getTwinCount(int N , int Arr[]) {
        // code here
     int c[100000]={0};
     int count=0;
     for(int i=0;i<N;i++){
         c[Arr[i]]++;
         if(c[Arr[i]]==2){
             c[Arr[i]]-=2;
             count++;
         }
     }
     return count*2;
     
}
};
