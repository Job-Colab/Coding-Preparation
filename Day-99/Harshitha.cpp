string solve(string s) {
  
    s.erase(unique(s.begin() , s.end()) , s.end());
    return s;
    //cout<<str.erase(std::unique(str.begin(), str.end()), str.end());
}
