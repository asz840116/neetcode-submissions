class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // long long int n = 1;
        // int zero_count = 0;
        // for(int i = 0 ; i < nums.size(); i++){
        //     if(nums[i] == 0){
        //         zero_count++;
        //     } else{
        //         n *= nums[i];
        //     }
        // }
        // if (zero_count > 1) {
        //     return vector<int>(nums.size(), 0); 
        // }

        // for(int i = 0 ; i <nums.size(); i++){
        //     if(zero_count > 0){
        //         nums[i] = (nums[i] == 0)? n : 0;
        //     } else{
        //         nums[i] = n / nums[i];
        //     }
        // }
        // return nums;

        int n = nums.size();
        vector<int> res(n,1);

        for(int i = 1; i < n; i++){
            res[i] = res[i-1] * nums[i-1];
        }
        int post = 1;

        for(int i = n - 1; i >= 0; i--){
            res[i] *= post;
            post *= nums[i];
        }
        return res;

    }
};
