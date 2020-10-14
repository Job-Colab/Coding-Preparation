#include "solution.hpp"
using namespace std;
class Solution {
    public:
    string solve(string str) {
        string ans;
        int h1 = (int)str[1] - '0';
        int h2 = (int)str[0] - '0';
        int hh = (h2 * 10 + h1 % 10);
        if (str[5] == 'a') {
            if (hh == 12) {
                ans += "00";
                for (int i = 2; i <= 4; i++) ans += str[i];
            } else {
                for (int i = 0; i <= 4; i++) ans += str[i];
            }
        } else {
            if (hh == 12) {
                ans += "12";
                for (int i = 2; i <= 4; i++) ans += str[i];
            } else {
                hh = hh + 12;
                ans += to_string(hh);
                for (int i = 2; i <= 4; i++) ans += str[i];
            }
        }
        return ans;
    }
};