class Solution {
public:
    vector<int> finalPrices(vector<int>& p) {
        int i,n=p.size(),j;
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            if(p[i]>=p[j])
            {
                p[i]=p[i]-p[j];     
                break;
            }
        }
        return p;
    }
};