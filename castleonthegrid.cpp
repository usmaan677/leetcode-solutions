
int minimumMoves(vector<string> &grid, int startX, int startY, int goalX, int goalY) {
    int n = grid.size();
    const int INF = 1e9;
    vector<vector<int>> dist(n, vector<int>(n, INF));
    queue<pair<int,int>> q;

    dist[startX][startY] = 0;
    q.push({startX, startY});

    int dirs[4][2] = {{-1,0}, {1,0}, {0,-1}, {0,1}};

    while (!q.empty()) {
        auto [x, y] = q.front(); q.pop();
        if (x == goalX && y == goalY) return dist[x][y];

        for (auto &d : dirs) {
            int dx = d[0], dy = d[1];
            int nx = x + dx, ny = y + dy;
            // slide in this direction
            while (0 <= nx && nx < n && 0 <= ny && ny < n && grid[nx][ny] == '.') {
                if (dist[nx][ny] > dist[x][y] + 1) {
                    dist[nx][ny] = dist[x][y] + 1;
                    q.push({nx, ny});
                }
                nx += dx; ny += dy;
            }
        }
    }
    return -1; // unreachable
}