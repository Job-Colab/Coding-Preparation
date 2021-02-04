#include <bits/stdc++.h> 

//return the address of the string
char* reverse(char *S, int len)
{
    //code here
    
    stack <char> s;
    
    for(int i=0; i<len; i++)
        s.push(S[i]);
        
    for(int j=0; j<len; j++) {
        S[j] = s.top();
        s.pop();
    }
    
    return S;
        
}
