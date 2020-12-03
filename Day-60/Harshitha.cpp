#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<string> solve(int n) {
    
    vector<string>printNumbers;
    
    for(int i = 1 ; i <= n ; i++){
        if(i % 3 == 0 || to_string(i).find('3') != string::npos ||  to_string(i).find('6') != string::npos ||  to_string(i).find('9') != string::npos)
        printNumbers.push_back("clap");
        
        else
        printNumbers.push_back(to_string(i));
        
    }
    return printNumbers;
}

int main()
{
    int n;
    cin>>n;

    vector<string>print_nos;
    
    print_nos = solve(n);

    for(int i = 0 ; i < n ; i++)
    cout<<print_nos[i]<<" ";

    return 0;
}