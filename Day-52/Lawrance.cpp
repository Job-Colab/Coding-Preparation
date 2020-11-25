class Solution {
public:
    int reverse(int x) {
        long int reversed = 0;
        while(x != 0) {
            reversed = (reversed * 10) + (x % 10);
            x /= 10;
        }
        return (reversed > INT_MAX || reversed < INT_MIN) ? 0 : reversed;
    }
};
