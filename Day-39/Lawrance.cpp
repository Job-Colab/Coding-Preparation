void kaprekarNumbers(int p, int q) {
    int answers = 0;
    for(long long i = p; i <= q; i++) {
        long long squared = i * i;
        long long one;
        long long two;
        string temp = to_string(squared);
        if(temp == "1") {
            cout << i << " ";
            ++answers;
        }
        else if(temp.length() > 1) {
            string firstHalf = temp.substr(0, temp.size()/2);
            string secondHalf = temp.substr(temp.size()/2,temp.size()/2 + 1);
            one = stoi(firstHalf);
            two = stoi(secondHalf);
            if(one + two == i)  {
                cout << i << " ";
                ++answers;
            }
        }
    }
    if(answers == 0) {
        cout << "INVALID RANGE" << endl;
    } else {
        cout << endl;
    }
}
