#include <bits/stdc++.h>

using namespace std;

string caesarCipher(string s, int k) {
    string ans="";
    for(int i=0; i<s.length(); i++){
        if(isupper(s[i]))
            ans+=char(int(s[i]+k-65)%26+65);
        else if(islower(s[i]))
            ans+=char(int(s[i]+k-97)%26+97);
        else
            ans+=s[i];
    }
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int k;
    cin >> k;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = caesarCipher(s, k);

    fout << result << "\n";

    fout.close();

    return 0;
}
