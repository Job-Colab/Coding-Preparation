#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string> st;
        for(string i : logs) {
            if(i == "../" && !st.empty()) {
                st.pop();
            }
            else if( i != "./" && i != "../"){
                st.push(i);
            }
        }
        return st.size();
    }
};

int main(int argc, char *argv[]) {

    
    return 0;
}
