#include <bits/stdc++.h>

using namespace std;

char alphaL[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
char alphaU[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
int empty = 1;

string caesarCipher(string s, int k) {
	
	string output;
	
	if(k>25){
		while(k>25)
			k -= 26;				
	}
	
	for(int i=0;i<s.size();i++){
		for(int j=0;j<26;j++){
			
			if(s.at(i) == alphaL[j]){
				
				if(j+k > 25){
					output += alphaL[j+k-26];
					empty = 0;
					
					break;
				}
				else {
					output += alphaL[j+k];
					empty = 0;
					break;
				}
			}
			else if(s.at(i) == alphaU[j]){
				
				if(j+k > 25){
					output += alphaU[j+k-26];
					empty = 0;
					break;
				}
				else {
					output += alphaU[j+k];
					empty = 0;
					break;
				}
			}	
		}
		
		if(empty == 1)
			output += s.at(i);
		else 
			empty = 1;	
	}
	
	cout<<output;		
	return output;
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

