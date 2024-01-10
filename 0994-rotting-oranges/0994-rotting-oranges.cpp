class Solution
{
public:
    int orangesRotting(vector<vector<int>> &grid)
    {

        queue<pair<pair<int, int>, int>> q;
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> vis(m, vector<int>(n,0));

        int fresh = 0;
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[0].size(); j++)
            {
                if (grid[i][j] == 2)
                {
                    q.push({{i, j}, 0});
                    vis[i][j] = 2;
                }
                if (grid[i][j] == 1)
                {
                    fresh++;
                }
                
            }
        }

        int dx[] = {1, 0, -1, 0};
        int dy[] = {0, 1, 0, -1};

        int ans = 0;
        int count = 0;
        while (!q.empty())
        {
            int x = q.front().first.first;
            int y = q.front().first.second;
            int starttime = q.front().second;
            ans = max(ans, starttime);
            q.pop();

            for (int i = 0; i < 4; i++)
            {
                int newx = x + dx[i];
                int newy =y +dy[i];

                if (newx >= 0 && newy >= 0 && newx < m && newy < n && grid[newx][newy] == 1 && vis[newx][newy] != 2)
                {
                    count++;
                    vis[newx][newy] = 2;

                    q.push({{newx, newy}, starttime + 1});
                }
            }
        }

        if (fresh == count)
            return ans;
        else
            return -1;
    }
};