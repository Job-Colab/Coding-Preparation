class Solution {
public:
    int minOperations(vector<string>& logs) {
        int num=0;
        for(int i=0; i<logs.size(); i++){
            if(logs[i]=="./"){
                continue;
            }
            else if(logs[i] == "../"){
               num--;
                if(num < 0) num = 0;
            }
            else{
                num+=1;
            }
        }
        return num;
    }
};
