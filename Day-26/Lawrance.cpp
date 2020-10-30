#include <iostream>
using namespace std;


class Solution {
public:
    string defangIPaddr(string address) {
        string ans = "";
        for(int i = 0; i < address.size(); i++) {
            if(address[i] != '.') {
                ans += address[i];
            }
            else {
                ans += "[.]";
            }
        }
        return ans;
    }
};

int main(int argc, char *argv[]) {
    Solution a;
    cout << a.defangIPaddr("1.1.1.1") << endl; 
    return 0;
}
