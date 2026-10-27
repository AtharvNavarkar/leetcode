class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> ans(m, string(n, '#'));
        int i = 0;
        int j = 0;
        while(j < n){
            ans[0][j] = '.';
            j++;
        }
        while(i < m){
            ans[i][n - 1] = '.';
            i++;
        }
        return ans;
    }
};