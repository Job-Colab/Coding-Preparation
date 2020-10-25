class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans=numBottles;
        int change=1,rem;
        while(change!=0){
            change=numBottles/numExchange;
            ans+=change;
            rem=numBottles%numExchange;
            numBottles=change+rem;
        }
        return ans;
    }
};
