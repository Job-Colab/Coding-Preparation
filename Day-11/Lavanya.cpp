#include <iostream>
using namespace std;

string caesarCipher(string s, int k) {
    if(k>26){
        k=k%26;
    }
    string newString="";
    for(int i=0;i<s.length();i++){
        if(s[i]>='a'&&s[i]<='z'){
            if((s[i]+k)>'z'){
                newString+=((s[i]-26)+k);
            }
            else{
                newString += (s[i]+k);
            }
        }
        else if(s[i]>='A'&&s[i]<='Z'){
            if((s[i]+k)>'Z'){
                newString+=((s[i]-26)+k);
            }else{
                newString += (s[i]+k);
            }
        }
        else{
            newString+=s[i];
        }
    }
    return newString;
}

int main() {
	string s;
	int k,n;
	cin>>n>>s>>k;
	string ans = caesarCipher(s,k);
	cout<<ans;
}
