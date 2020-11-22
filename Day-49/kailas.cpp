class Solution {
public:
    int findLucky(vector<int>& arr) {
        int max=0;
        int a[501]={};
        for(int i=0;i<arr.size();i++){
            a[arr[i]]++;
        }
        for(int i =1;i<501;i++){
            if(a[i]==i&&a[i]>max){
                max=a[i];
            }
        }
        if(max==0)
            return -1;
        else
            return max;
    }
};
    
