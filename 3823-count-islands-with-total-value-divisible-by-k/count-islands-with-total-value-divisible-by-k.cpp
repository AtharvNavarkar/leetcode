class Solution {
public:
    int m, n;
    long long f(int r, int c, vector<vector<int>>& grid, int k){
        if(r < 0 || c < 0 || r >= m || c >= n || grid[r][c] == 0){
            return 0;
        }
        int value = grid[r][c];
        grid[r][c] = 0;
        long long sum = value;

        sum += f(r + 1, c, grid, k);
        sum += f(r, c + 1, grid, k);
        sum += f(r - 1, c, grid, k);
        sum += f(r, c - 1, grid, k);

        return sum;
    }
    int countIslands(vector<vector<int>>& grid, int k) {
        m = grid.size();
        n = grid[0].size();
        int ans = 0;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(grid[i][j] > 0){
                    long long sum = f(i, j, grid, k);
                    if(sum%k == 0){
                        ans++;
                    }
                }
            }
        }
        return ans;
    }
};