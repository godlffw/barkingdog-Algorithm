#include <bits/stdc++.h>
#define X first
#define Y second

int board[1002][1002];
int day[1002][1002];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    
    queue<pair<int,int>> que;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> board[i][j];
            if (board[i][j] == 1) que.push({i,j});
            if (board[i][j] == 0) day[i][j] = -1;
        }
    }

    while(!que.empty()) {
        pair<int,int> cur = que.front();
        que.pop();
        for (int i = 0; i < 4; i++ ) {
            int nx = cur.X + dx[i];
            int ny = cur.Y + dy[i];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if (day[nx][ny] != -1) continue;
            day[nx][ny] = day[cur.X][cur.Y] + 1;
            que.push({nx,ny});

        }

    } 
    
    int ans = -1;
    for (int i = 0; i <n; i++) {
        for (int j = 0; j < m; j++) {
            if (day[i][j] == -1) {
                cout << -1;
                return 0;
            }
            if (day[i][j] >= ans) ans = day[i][j];
        }
    }

    cout << ans;
    
}
