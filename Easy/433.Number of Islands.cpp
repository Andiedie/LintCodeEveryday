class Solution {
public:
    /**
    * @param grid a boolean 2D matrix
    * @return an integer
    */
    int numIslands(vector<vector<bool>>& grid) {
        // Write your code here
        if (grid.size() <= 0 || grid[0].size() <= 0) return 0;
        int count = 0;
        int rowCount = grid.size(), columnCount = grid[0].size();
        for (int row = 0; row < rowCount; row++) {
            for (int column = 0; column < columnCount; column++) {
                if (grid[row][column]) {
                    count++;
                    bfs(grid, row, column);
                }
            }
        }
        return count;
    }
    void bfs(vector<vector<bool>>& grid, int row, int column) {
        queue<pair<int, int>> q;
        q.push(pair<int, int>(row, column));
        while (!q.empty()) {
            auto cor = q.front();
            q.pop();
            if (cor.first < 0 || cor.second < 0 ||
                cor.first >= grid.size() || cor.second >= grid[0].size())
                continue;
            if (grid[cor.first][cor.second]) {
                grid[cor.first][cor.second] = false;
                q.push(pair<int, int>(cor.first+1, cor.second));
                q.push(pair<int, int>(cor.first-1, cor.second));
                q.push(pair<int, int>(cor.first, cor.second+1));
                q.push(pair<int, int>(cor.first, cor.second-1));
            }
        }
    }
};
