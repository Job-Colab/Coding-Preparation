vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
        bool isZeroIsThere = false;
        long long int product = 1;
        vector<long long int> answer(nums.size());
        int zeroCount = 0;
        for(int i : nums) {
            if(i > 0) {
                product *= i;
            }
            else {
                isZeroIsThere = true;
                ++zeroCount;
            }
        }
        if(isZeroIsThere && zeroCount == 1) {
            for(int i = 0; i < n; i++) {
                if(nums[i] == 0) {
                    answer[i] = product;
                }
                else {
                    answer[i] = 0;
                }
            }
        }
        else if(isZeroIsThere && zeroCount > 1) {
            for(int i = 0; i < n; i++) {
                answer[i] = 0;
            }
        }
        else {
            for(int i = 0; i < n; i++) {
                answer[i] = round(product * pow(nums[i], -1));
            }
        }
        return answer;
    }
