class Solution {
public:
    int findLucky(vector<int>& arr) {
        
        map<int , int>lucky;
        vector<int>nos;
        for(int i = 0 ; i < arr.size() ; i++)
        {
            lucky[arr[i]]++;
        }
        int nothing = 0;
        
        for(auto i : lucky)
        {
             if(i.first == i.second)
            {
                nos.push_back(i.first);
            }
        }
        
     if(nos.size() >= 1)
     {
     return *max_element(nos.begin() , nos.end());
     }
     else
     {
     return -1;
     }
     
    }
};
//:)
