class Solution {
public:
    int numFriendRequests(vector<int>& ages) {
        int requests=0;
        
        for(int i=0;i<ages.size();i++){        
            for(int j=0;j<ages.size();j++)
                if(i != j)
                    if(!(ages[j] <= 0.5 * ages[i] + 7 || ages[j] > ages[i] || ages[j] > 100 && ages[i] < 100))
                       requests++;       
        }
        
        return requests;
    }
};
