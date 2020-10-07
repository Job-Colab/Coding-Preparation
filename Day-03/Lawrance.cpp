#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

    string s;
    cin >> s;
    string delimiter = ":";
    string time = s.substr(0, s.find(delimiter));
    string minutes = s.substr(3,2);
    string ans;
    if(time == "12") {
        if(s.find("am") != string::npos) {
            ans = "00";
        }
        else {
            ans = "12";
        }
    }
    else if(s.find("am") != string::npos) {
        ans = time ;
    }
    else {
        int temp = stoi(time);
        temp += 12;
        ans = to_string(temp);
    }
    ans = ans + ":" + minutes;
    cout << ans << endl;
    return 0;
}
