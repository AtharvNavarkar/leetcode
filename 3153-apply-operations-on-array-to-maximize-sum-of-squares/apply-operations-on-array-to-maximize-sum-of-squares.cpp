class Solution {
public:
    int maxSum(vector<int>& nums, int k) {
        long long MOD = 1e9 + 7;
        vector<int> bits(32, 0);
        for(int i = 0; i < nums.size(); i++){
            int num = nums[i];
            int j = 0;
            while(num > 0){
                if((num & 1) == 1){
                    bits[j]++;
                }
                num = num >> 1;
                j++;
            }
        }
        // for(int i = 0; i < bits.size(); i++){
        //     cout << bits[i] << "\n";
        // }
        int ans = 0;
        for(int i = 0; i < k; i++){
            long long num = 0;
            for(int b = 0; b < bits.size(); b++){
                if(bits[b] != 0){
                    num = num | (1LL << b);
                    bits[b]--;
                }
            }
            ans = (ans + num*num) % MOD;
        }

        return ans;
    }
};