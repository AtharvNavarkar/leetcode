class Solution {
public:
    int reverse(int x) {
        long ans = 0;

        while(x != 0){
            int a = x%10;
            x = x/10;
            ans = ans*10 + a;
        }
        if(INT_MAX >= ans && INT_MIN <= ans){
            return ans;
        }
        else return 0;
    }
};