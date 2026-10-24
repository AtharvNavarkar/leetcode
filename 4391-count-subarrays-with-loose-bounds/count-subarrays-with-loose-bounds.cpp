class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long l = 0;
        long long ans = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] <= maxK && nums[i] >= minK){
                l++;
                ans += l;
            }else{
                l = 0;
            }
        }
        return ans;
    }
};