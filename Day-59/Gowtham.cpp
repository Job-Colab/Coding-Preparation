class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        
        int count,temp,soldiers[mat.size()],ordered[mat.size()];
        vector<int> output;
        
        for(int i=0; i<mat.size(); i++){
            
            count = 0;
            
            for(int j=0; j<mat[i].size(); j++)
                if(mat[i][j] == 1)
                    count++;
            
            soldiers[i] = count;
            ordered[i] = count;
        }
        
        for(int k=0; k<mat.size(); k++){
            for(int l=0; l<mat.size()-k-1; l++)
                if(ordered[l] > ordered[l+1]){
                    temp = ordered[l];
                    ordered[l] = ordered[l+1];
                    ordered[l+1] = temp;
                }
        }
        
        for(int m=0; m<k; m++)
            for(int n=0; n<mat.size(); n++)
                if(ordered[m] == soldiers[n]){
                    output.push_back(n);
                    soldiers[n] = 100;
                    break;
                }                                    
            
        return output;
    }
};
