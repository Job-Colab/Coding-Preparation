class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> inde;
        unordered_map<int,int> ar;
        for(auto i = 0;i<nums.size();i++){
            ar.insert({nums[i],i});
        }
        int temp;
        for(auto i = 0;i<nums.size();i++){
            temp = target-nums[i];
            auto id = ar.find(temp);
            if(id!=ar.end()&&id->second!=i){
                inde.push_back(i);
                inde.push_back(id->second);
                break;
            }
            else
                continue;
        }
        return inde;
    }
};
int main(){
    Solution *s = new Solution();
    vector<int> test = {3,2,4};
    vector<int> ans = s->twoSum( test, 6);
    cout << ans.at(0) << " " << ans.at(1) << endl;
    return 0;
}
