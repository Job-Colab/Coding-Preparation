vector<string> solve(int n) {
    vector<string> ans;
    for(int i=1;i<=n;i++){
        string str = std::to_string(i);
        if(i%3==0){
            str="clap";
        }
        for(int j=0;j<str.length();j++){
            if(str[j]=='3'||str[j]=='6'||str[j]=='9'){
                str="clap";
                break;
            }
        }
        ans.push_back(str);
        
    }
    return ans;
}
