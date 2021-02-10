class Solution {
  public:
       int RedOrGreen(int N,string S) {
            int a=0,b=0;
            for(auto i : S){
                if(i=='R')
                    a++;
                else
                    b++;
            }
        return a<b ? a : b;
    }
};
