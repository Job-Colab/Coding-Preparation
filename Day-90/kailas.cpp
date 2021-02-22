vector<int> solve(vector<int>& a, vector<int>& b) {
    vector<int> ans;
    int sa = a.size();
    int sb = b.size();
    if(sa==0)
        return b;
    if(sb==0)
        return a;
    int i=0,j=0;
    while(true){
        if(i==sa){
            for(int k = j;j<sb;j++){
                ans.push_back(b[j]);
            }
            break;
        }
        else if(j==sb){
            for(int k = i;i<sa;i++){
                ans.push_back(a[i]);
            }
            break;
        }
        else if(a[i]>b[j]){
            ans.push_back(b[j]);
            j++;
        }
        else if(b[j]>a[i]){
            ans.push_back(a[i]);
            i++;
        }
        else if(b[j]==a[i]){
            ans.push_back(a[i]);
            ans.push_back(b[j]);
            i++;j++;
        }
    }
    return ans;
}
