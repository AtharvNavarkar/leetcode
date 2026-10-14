class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string ans;
        while(sum >= 0 && num >= 0){
            if(sum == 0 && num == 0){
                return ans;
                break;
            }
            if(sum < 9){
                ans.push_back(sum + '0');
                sum = 0;
            }else{
                ans.push_back('9');
                sum = sum - 9;
            }
            num--;
        }
        return "";
    }
};