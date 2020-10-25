class Solution {
public:
    int numWaterBottles(int nB, int nE) {
    
        int empty=nB,extra;
        while(empty>=nE)
        {
            extra=empty/nE;
            empty=nB%nE+extra;
            nB+=extra;
        }
        return nB;
    }
};