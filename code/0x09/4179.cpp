#include <bits/stdc++.h>
#define X first
#define Y second

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

char board[1002][1002];
int fire[1002][1002];
int jihun[1002][1002];

using namespace std;

int main() {
    int r,c;
    cin >> r >> c;
    fill(&fire, &fire + 1002 * 1002, -1);
    fill(&jihun, &jihun + 1002 * 1002, -1);
    queue<pair<int,int>> qfire;
    queue<pair<int,int>> qjihun;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> board[i][j];
            if (board[i][j] == 'F') {
                qfire.push({i,j});
                fire[i][j] = 0;
            }
            if (board[i][j] == 'J') {
                qjihun.push({i,j});
                jihun[i][j] = 0;
            }
        }
    }

    while(!qfire.empty()) {
        pair<int, int> cur = qfire.front();
        qfire.pop();
        for(int i = 0; i < 4; i++) {
            int nx = cur.X + dx[i];
            int ny = cur.Y + dy[i];
            if (nx < 0 || nx >= r || ny < 0 || ny >= c) continue;
            if (fire[nx][ny] >= 0 || board[nx][ny] == '#') continue;
            fire[nx][ny] = fire[cur.X][cur.Y] + 1;
            qfire.push({nx, ny});
        }
    }

    while(!qjihun.empty()) {
        pair<int, int> cur = qjihun.front();
        qjihun.pop();
        for (int i = 0; i < 4; i++) {
            int nx = cur.X + dx[i];
            int ny = cur.Y + dy[i];
            if (nx < 0 || nx >= r || ny < 0 || ny >= c) {
                cout << jihun[cur.X][cur.Y] + 1;
                return 0;
            }
            if (jihun[nx][ny] >= 0 || board[nx][ny] == '#') continue;
            if (fire[nx][ny] != -1 && fire[nx][ny] <= jihun[cur.X][cur.Y] + 1) continue;
            jihun[nx][ny] = jihun[cur.X][cur.Y] + 1;
            qjihun.push({nx, ny});
        }
    }
    cout << "IMPOSSIBLE\n";

    

    
}
