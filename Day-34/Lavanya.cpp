class Solution {
public:
    int maximum69Number (int num) {
        string ip = to_string(num);
        for(char &ch: ip){
            if(ch=='6'){
                ch='9';
                break;
            }
        }
        return stoi(ip);
    }
};
