class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n = stones.size();
        if(n==2){
                return(abs(stones[n-1]-stones[n-2]));
            }
        while(n>1){
            sort(stones.begin(),stones.end());
            int a = stones.size();
            int res = stones[a-1]-stones[a-2];
            if(res==0){
                stones.pop_back();
                stones.pop_back();
                n-=2;
            }
            else{
                stones.pop_back();
                stones.pop_back();
                stones.push_back(res);
                n--;
            }
        }
        if(n==0)
             return 0;
        else
            return(stones.front());
     }
};
int main(){
    vector<int> ar={3,7,8};
    Solution *obj=new Solution;
    int a = obj->lastStoneWeight(ar);
    cout<<a;
    return 0;
}
