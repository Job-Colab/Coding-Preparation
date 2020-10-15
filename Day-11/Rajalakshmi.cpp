#include <bits/stdc++.h>

using namespace std;

// Complete the caesarCipher function below.
string caesarCipher(string s, int k) {
string ans=s;
int i;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]!='-' && islower(s[i]))
            ans[i]=int((s[i]+k)-97)%26+97; 
        if(s[i]!='-' && isupper(s[i])) 
            ans[i]=int((s[i]+k)-65)%26+65;    

    }
return ans;
}

int main()
{

    int n;
    cin >> n;

    string s;
    cin>>s;

    int k;
    cin >> k;

    string result = caesarCipher(s, k);

    cout << result << "\n";

    return 0;
}
