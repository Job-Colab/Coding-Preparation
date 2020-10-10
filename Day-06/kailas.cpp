class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res=0;
        for(int i = 0;i<nums.size();i++){
            res=res^nums[i];
        }
        return res;
    }
};
int main(){
Solution obj;
vector<int> ar = {4,1,2,1,2};
cout<<obj.singleNumber(ar);
return 0;
}
