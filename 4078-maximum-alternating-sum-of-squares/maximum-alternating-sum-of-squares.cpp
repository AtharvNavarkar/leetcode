class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            nums[i] = abs(nums[i]);
        }

        sort(nums.begin(), nums.end());
        long long ans = 0;
        int left = 0;
        int right = nums.size() - 1;
        
        int n = nums.size();
        
        for(int i = n/2; i < n; i++){
            ans = ans + 1LL*nums[i]*nums[i];
        }
        for(int i = 0; i < n/2; i++){
            ans = ans - 1LL*nums[i]*nums[i];
        }
        return ans;
    }
};