class Solution {
public:
    int numWaterBottles(int bottles, int exchange) {
    int ans = bottles;
    if(bottles == exchange) {
        ++ans;
    }
    else if(bottles > exchange) {
        int remaining = 0;
        while(bottles != 0) {
            bottles += remaining;
            remaining = bottles % exchange;
            bottles -= remaining;
            bottles /= exchange;
            ans += bottles;
        }
    }
    return ans;
    }
};
