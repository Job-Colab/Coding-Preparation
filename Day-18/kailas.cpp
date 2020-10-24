class Solution {
public:
    int minOperations(vector<string>& logs) {
         vector<string> folders;
         string ar;
        for(auto i=0;i<logs.size();i++){
            ar=logs[i];
            if(ar=="../"){
                if(folders.size()!=0){
                    folders.pop_back();
                }
            }
            else if(ar=="./"){
                //do nothing;
            }
            else{
                folders.push_back(ar);
            }
        }
        return folders.size();
    }
};
