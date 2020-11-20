class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
         set<string> dest;
        for(auto row : paths){
            dest.insert(row[1]);
        }
        for(auto row : paths){
            if(dest.count(row[0]))
                dest.erase(row[0]);
        }
        for(string  s : dest)
            return s;
        
        return "";
    }
};
