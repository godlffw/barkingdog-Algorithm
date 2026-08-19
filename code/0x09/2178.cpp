#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int board[101][101];
int dist[101][101];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main() {
    fill(&dist[0][0], &dist[0][0] + 101 * 101, -1);

    int n,m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> board[i][j];
        }
    }
    queue<pair<int, int>> que;
    dist[0][0] = 0;
    que.push({0,0});
    while(!que.empty()){
        pair<int,int> cur = que.front();
        que.pop();
        for (int i = 0; i < 4; i++) {
            int nx = cur.X + dx[i];
            int ny = cur.Y + dy[i];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m ) continue;
            if (dist[nx][ny] != -1 || !board[nx][ny]) continue;
            dist[nx][ny] = dist[cur.X][cur.Y] + 1;
            que.push({nx, ny});
        }
    }
    cout << dist[n-1][m-1] + 1;
}
