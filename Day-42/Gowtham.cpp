class Solution {
public:
    int uniquePaths(int m, int n) {
        
        int max,min;
        
        if(m>n){
            max = m-1;
            min = n-1;
        }
        else if(n>m){
            max = n-1;
            min = m-1;
        }
        else{
            max = m-1;
            min = m-1;
        }
            
        long paths = 1;

        for (int i = min - 1; i >= 0; i--) {
            paths = paths * (max + min - i) / (min - i);
        }
            
        return paths;
    }
};
