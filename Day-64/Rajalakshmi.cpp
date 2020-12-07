#include <bits/stdc++.h>

using namespace std;

// Complete the strangeCounter function below.
long strangeCounter(long t) {
    
    long int i=0;
    long int c=3,temp=3;
    while(t>i+c)
    {
         i+=c;
        c*=2;
    }
    i++;
    long int x=t-i;
    c-=x;    
    return c;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    long t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = strangeCounter(t);

    fout << result << "\n";

    fout.close();

    return 0;
}
