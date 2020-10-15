#include <iostream>

using namespace std;
int main() {
    int k,l;
    char letter;
    string word,encrptxt;
    cout<<"Enter the length of the string: ";
    cin>>l;
    cout<<"\n Enter the string to be encrypted: ";
    cin>>word;
    cout<<"\n Enter the number of letters to rotate: ";
    cin>>k;
    for (int i = 0; i < word.length(); i++) 
    {   int code = word[i];
        if((code>=65&&code<=90)||(code>=97&&code<=122))   
        {   code+=k;
		        if(code>122||code>90)   //rotating to the front when the encrypted letters exceed 'z'
		        {  code-=26;  }
		    }
		    letter = (char) code;
        encrptxt += letter;
    }
    cout<<"\n the encrypted text is: "<<encrptxt; 
    return 0;
}
