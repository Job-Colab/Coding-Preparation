void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    int orange = 0;
    int apple = 0;
    for(auto i : apples) {
        int temp = i + a;
        if(temp >= s && temp <= t) {
            ++apple;
        }
    }
    for(auto i : oranges) {
        int temp = i + b;
        if(temp >= s && temp <= t) {
            ++orange;
        }
    }
    cout << apple << endl;
    cout << orange << endl;

}
